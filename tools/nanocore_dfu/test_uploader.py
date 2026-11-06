"""Protocol checks against captured ToneCommand traffic plus fault scenarios."""
import hashlib
import json
import os
from pathlib import Path
import struct
import sys
import types
import unittest
from unittest.mock import Mock, patch
from uploader import Package, ProtocolError, Simulator, TransferError, Uploader, UsbTransport, CHUNK, MAX_CORE, VID, PID

ROOT = Path(__file__).resolve().parents[2]
FIRMWARE = Path(os.environ.get('NANOCORE_FIRMWARE', ROOT/'nanocore-1.12.fmu'))
CAPTURE = ROOT/'evidence/vendor-dfu-trace.json'

def synthetic_package():
    """Test-only structural image; it contains no vendor code or valid signature."""
    head = bytearray(41)
    head[:8] = b'LUM0\x02\x83\x01\x13'
    struct.pack_into('<I', head, 12, 727040)
    head[36:] = b'\x041.12'
    core = bytes(head) + bytes(727040 + 68)
    footer = bytearray(129)
    footer[:6] = b'FMUC\x01\x01'
    struct.pack_into('<H', footer, 6, 129)
    struct.pack_into('<I4H', footer, 8, 1, VID, 0x1301, VID, PID)
    struct.pack_into('<I', footer, 20, len(core))
    footer[24:33] = b'\x08nanocore'
    footer[33:65] = hashlib.sha256(core).digest()
    return core + bytes(footer)

class CaptureReplay:
    """Oracle is saved execution of the vendor library, not our simulator."""
    def __init__(self, check_firmware=True):
        self.rows = json.loads(CAPTURE.read_text())['controls']
        self.check_firmware = check_firmware
        self.at = 0

    def control(self, type_, request, value, index, payload, timeout):
        assert self.at < len(self.rows), 'Additional request after captured completion'
        row = self.rows[self.at];self.at += 1
        expected = row
        length = payload if isinstance(payload,int) else len(payload)
        actual = (type_,request,value,index,length)
        assert actual == tuple(expected[k] for k in ['type','request','value','index','length']), (self.at,actual,expected)
        assert 0 < timeout <= expected['timeout']
        if type_ & 128:
            response = expected['response']
            return bytes(length) if isinstance(response,str) else bytes(response)
        if length:
            is_firmware = request == 1 and value >= 2
            if self.check_firmware or not is_firmware:
                assert hashlib.sha256(payload).hexdigest()==row['out_sha256'], ('Payload hash differs from vendor capture',self.at)
        return length

class UploaderTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.blob=synthetic_package();cls.package=Package.parse(cls.blob)

    def test_vendor_control_sequence_with_synthetic_firmware(self):
        transport=CaptureReplay(check_firmware=False)
        result=Uploader(transport).upload(self.package)
        self.assertTrue(result['host_transfer_completed'])
        self.assertEqual(transport.at,len(transport.rows))
        self.assertEqual(transport.at,579)

    def test_simulation_flash_and_footer_exclusion(self):
        t=Simulator();Uploader(t).upload(self.package)
        self.assertEqual(bytes(t.firmware),self.package.core)
        self.assertEqual(t.flash[:len(t.firmware)],t.firmware)
        self.assertTrue(t.finished)
        self.assertEqual(self.package.footer_bytes,129)
        self.assertTrue(self.package.footer_digest_matches)

    def test_modified_payload_is_sent_without_host_authentication(self):
        data=bytearray(self.blob);data[41]^=1;p=Package.parse(bytes(data))
        self.assertFalse(p.footer_digest_matches)
        t=Simulator();Uploader(t).upload(p)
        self.assertEqual(t.firmware[41],data[41])
        self.assertTrue(t.finished)

    def test_wrong_product_rejected(self):
        data=bytearray(self.blob);data[6:8]=struct.pack('<H',0x1305)
        with self.assertRaises(ProtocolError):Package.parse(data)

    def test_wrong_contract_identity_rejected(self):
        data=bytearray(self.blob);end=len(self.package.core);data[end+18]^=1
        with self.assertRaises(ProtocolError):Package.parse(data)

    def test_bad_lengths_truncation_and_trailing_data(self):
        for data in [self.blob[:104],self.blob[:-1],self.blob+b'x']:
            with self.subTest(length=len(data)),self.assertRaises(ProtocolError):Package.parse(data)
        data=bytearray(self.blob);data[12:16]=struct.pack('<I',MAX_CORE)
        with self.assertRaises(ProtocolError):Package.parse(data)

    def test_full_boundary_final_block_number(self):
        # A synthetic structural core of exactly4096 bytes, no contract/signature claim.
        head=bytearray(self.blob[:41]);head[12:16]=struct.pack('<I',4096-41-68)
        p=Package.parse(bytes(head)+bytes(4096-41))
        t=Simulator();Uploader(t).upload(p)
        writes=[r for r in t.trace if r['type']==33 and r['request']==1 and r['value']>=2]
        self.assertEqual([(r['value'],r['length']) for r in writes],[(2,4096),(3,0)])

    def test_short_and_next_block_final_numbering(self):
        for size,expected in [(4095,[(2,4095),(2,0)]),(4097,[(2,4096),(3,1),(3,0)])]:
            with self.subTest(size=size):
                head=bytearray(self.blob[:41]);head[12:16]=struct.pack('<I',size-41-68)
                t=Simulator();Uploader(t).upload(Package.parse(bytes(head)+bytes(size-41)))
                writes=[(r['value'],r['length']) for r in t.trace if r['type']==33 and r['request']==1 and r['value']>=2]
                self.assertEqual(writes,expected)

    def test_prepare_caps_each_transfer_by_remaining_deadline(self):
        now=[0.0];calls=[]
        class SlowPreparation:
            def control(self,type_,request,value,index,payload,timeout):
                calls.append((request,timeout))
                if request==5:
                    now[0]+=0.75
                    return bytes([10])
                now[0]+=0.25
                return 0
        with self.assertRaisesRegex(ProtocolError,'DFU idle'):
            Uploader(SlowPreparation(),clock=lambda:now[0],poll_timeout=1).prepare()
        self.assertEqual(calls,[(5,1000),(4,250)])

    def test_prepare_does_not_reset_after_deadline(self):
        now=[0.0];calls=[]
        class DeadlinePreparation:
            def control(self,type_,request,value,index,payload,timeout):
                calls.append(request);now[0]=1.0
                return bytes([10])
        with self.assertRaisesRegex(ProtocolError,'deadline'):
            Uploader(DeadlinePreparation(),clock=lambda:now[0],poll_timeout=1).prepare()
        self.assertEqual(calls,[5])

    def test_timeout_short_write_bad_status_stop_before_finalize(self):
        for fault in ['write-timeout','write-short','status-error','status-short']:
            with self.subTest(fault=fault):
                t=Simulator(fault)
                with self.assertRaises(ProtocolError):Uploader(t).upload(self.package)
                self.assertFalse(t.finished)
                self.assertFalse(any(r['type']==33 and r['request']==1 and r['length']==0 for r in t.trace))

    def test_optional_progress_stall_is_tolerated(self):
        t=Simulator('progress-stall');Uploader(t).upload(self.package)
        self.assertEqual(bytes(t.firmware),self.package.core)

    def test_busy_status_polls_until_ready(self):
        t=Simulator('busy');Uploader(t,sleep=lambda _:None).upload(self.package)
        self.assertTrue(t.finished)
        self.assertEqual(sum(r['request']==3 for r in t.trace),384)

    def test_initial_error_clear_and_abort(self):
        for state,command in [(10,4),(5,6)]:
            with self.subTest(state=state):
                t=Simulator(initial_state=state);Uploader(t).upload(self.package)
                self.assertEqual((t.trace[1]['type'],t.trace[1]['request']),(33,command))
                self.assertTrue(t.finished)

    def test_stuck_busy_and_excessive_poll_delay_are_bounded(self):
        class Stuck(Simulator):
            def control(self,*args):
                if args[1]==3:return bytes([0,255,255,255,4,0])
                return super().control(*args)
        t=Stuck()
        with self.assertRaisesRegex(ProtocolError,'poll delay'):Uploader(t).upload(self.package)
        self.assertFalse(t.finished)

    def test_model_rejects_write_before_erase(self):
        t=Simulator();t.control(33,240,0,0,struct.pack('<I',4096),5000)
        t.control(33,1,0,0,b'\x21'+bytes(4),5000)
        with self.assertRaisesRegex(ProtocolError,'unerased'):t.control(33,1,2,0,bytes(4096),5000)

class VendorFirmwareTests(unittest.TestCase):
    @unittest.skipUnless(FIRMWARE.is_file(), 'Optional: provide NanoCore 1.12 via NANOCORE_FIRMWARE')
    def test_vendor_payload_hashes(self):
        blob=FIRMWARE.read_bytes();fixture=json.loads(CAPTURE.read_text())
        self.assertEqual(hashlib.sha256(blob).hexdigest(),fixture['firmware_sha256'])
        package=Package.parse(blob)
        self.assertEqual(hashlib.sha256(package.core).hexdigest(),fixture['core_sha256'])
        transport=CaptureReplay();Uploader(transport).upload(package)
        self.assertEqual(transport.at,fixture['control_count'])

class UsbBackendTests(unittest.TestCase):
    """Mock module boundary: these tests never import or open physical USB."""
    def setUp(self):
        self.core=types.ModuleType('usb.core');self.util=types.ModuleType('usb.util')
        self.core.find=Mock();self.core.USBError=type('USBError',(OSError,),{})
        self.util.claim_interface=Mock();self.util.release_interface=Mock();self.util.dispose_resources=Mock()
        usb=types.ModuleType('usb');usb.core=self.core;usb.util=self.util
        self.modules=patch.dict(sys.modules,{'usb':usb,'usb.core':self.core,'usb.util':self.util})
        self.modules.start();self.addCleanup(self.modules.stop)

    def device(self,bus=3,address=4,interfaces=None):
        if interfaces is None:
            interfaces=[types.SimpleNamespace(bInterfaceClass=0xFE,bInterfaceSubClass=1,bInterfaceProtocol=2,bAlternateSetting=0,bInterfaceNumber=7)]
        return types.SimpleNamespace(bus=bus,address=address,get_active_configuration=Mock(return_value=interfaces),ctrl_transfer=Mock())

    def test_vid_pid_and_bus_address_selection_and_release(self):
        wanted=self.device();other=self.device(address=5)
        self.core.find.return_value=[other,wanted]
        transport=UsbTransport(3,4)
        self.core.find.assert_called_once_with(find_all=True,idVendor=VID,idProduct=PID)
        self.assertIs(transport.device,wanted);self.assertEqual(transport.interface,7)
        self.util.claim_interface.assert_called_once_with(wanted,7)
        transport.close()
        self.util.release_interface.assert_called_once_with(wanted,7)
        self.util.dispose_resources.assert_called_once_with(wanted)

    def test_ambiguous_and_missing_device_do_not_claim(self):
        for devices in [[],[self.device(),self.device()],[self.device(bus=9)]]:
            self.core.find.return_value=devices
            with self.assertRaises(ProtocolError):UsbTransport(3,4)
        self.util.claim_interface.assert_not_called()

    def test_claim_failure_disposes_and_does_not_release_unclaimed_interface(self):
        device=self.device();self.core.find.return_value=[device]
        self.util.claim_interface.side_effect=self.core.USBError('claim failed')
        with self.assertRaises(self.core.USBError):UsbTransport(3,4)
        self.util.dispose_resources.assert_called_once_with(device)
        self.util.release_interface.assert_not_called()

    def test_bad_or_ambiguous_interface_is_rejected_before_claim(self):
        valid=self.device().get_active_configuration()[0]
        for interfaces in [[],[valid,valid]]:
            device=self.device(interfaces=interfaces);self.core.find.return_value=[device]
            with self.assertRaisesRegex(ProtocolError,'DFU interface'):UsbTransport(3,4)
            self.util.dispose_resources.assert_called_with(device)
        self.util.claim_interface.assert_not_called()

    def test_control_preserves_interface_timeout_and_translates_usb_error(self):
        device=self.device();self.core.find.return_value=[device]
        transport=UsbTransport(3,4)
        device.ctrl_transfer.return_value=[0,0,0,0,5,0]
        self.assertEqual(transport.control(0xA1,3,0,7,6,123),bytes([0,0,0,0,5,0]))
        device.ctrl_transfer.assert_called_once_with(0xA1,3,0,7,6,timeout=123)
        device.ctrl_transfer.side_effect=self.core.USBError('timed out')
        with self.assertRaisesRegex(TransferError,'timed out'):
            transport.control(0x21,1,2,7,b'abc',400)
        transport.close()

    def test_release_failure_still_disposes_resources(self):
        device=self.device();self.core.find.return_value=[device]
        transport=UsbTransport(3,4)
        self.util.release_interface.side_effect=self.core.USBError('device disappeared')
        with self.assertRaises(self.core.USBError):transport.close()
        self.util.dispose_resources.assert_called_once_with(device)
        self.assertFalse(transport.claimed)

if __name__=='__main__':unittest.main(verbosity=2)
