import unittest
from midi_frames import SysexStream

class SysexStreamTest(unittest.TestCase):
    def test_every_fragment_boundary(self):
        frame = bytes.fromhex('f07d4e437102000039007f00f7')
        for split in range(len(frame) + 1):
            s = SysexStream()
            self.assertEqual(s.feed(frame[:split]) + s.feed(frame[split:]), [frame])

    def test_new_start_discards_incomplete_reply(self):
        s = SysexStream()
        self.assertEqual(s.feed(bytes.fromhex('f07d4e4301')), [])
        self.assertEqual(s.feed(bytes.fromhex('f07d0203f7')), [bytes.fromhex('f07d0203f7')])
        self.assertEqual(s.resyncs, 1)

    def test_realtime_and_concatenated_frames(self):
        s = SysexStream()
        self.assertEqual(s.feed(bytes.fromhex('b0017ff07df801faf7f07d02f7')),
                         [bytes.fromhex('f07d01f7'), bytes.fromhex('f07d02f7')])

    def test_status_and_length_abort(self):
        s = SysexStream(limit=8)
        self.assertEqual(s.feed(b'\xf0' + bytes(20) + b'\xf7'), [])
        self.assertEqual(s.feed(bytes.fromhex('f0019001f7')), [])
        self.assertEqual(s.feed(bytes.fromhex('f001f7')), [bytes.fromhex('f001f7')])
        self.assertEqual(s.resyncs, 2)

if __name__ == '__main__':
    unittest.main()
