"""Layout-based release routing, NOT an authenticity or patch-safety check.

Firmware 1.2 retained the internal 1.12 label. Callers must additionally enforce
exact segment hashes / expected bytes before modifying an image.
"""
from patch_image import extract_fit, require

V120_LAYOUT = ((2048, 0x8570, 0x30040000), (0x9000, 0x1860, 0x30060000),
               (0xb000, 0xc42c, 0x30080000), (0x17800, 0xa1f78, 0x40000000))


def identify_firmware(image):
    fit = extract_fit(image)
    layout = tuple((s['offset'], s['size'], s['load_address']) for s in fit['segments'])
    if layout == V120_LAYOUT:
        require(fit['image_version'] == '1.12', 'Unexpected 1.2 internal version')
        return '1.2'
    require(len(layout) == 2, 'Unsupported firmware layout')
    version = {'1.10': '1.10', '1.11b': '1.11', '1.12': '1.12'}.get(fit['image_version'])
    require(version is not None, 'Unsupported firmware version')
    return version
