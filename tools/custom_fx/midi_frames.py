"""Bounded SysEx framing across fragmented CoreMIDI packets."""

class SysexStream:
    def __init__(self, limit=4096):
        self.pending = bytearray()
        self.limit = limit
        self.resyncs = 0

    def feed(self, data):
        frames = []
        for byte in data:
            if byte >= 0xf8:  # Realtime bytes may occur inside SysEx.
                continue
            if byte == 0xf0:
                if self.pending:
                    self.resyncs += 1
                self.pending = bytearray([byte])
            elif self.pending:
                if byte == 0xf7:
                    self.pending.append(byte)
                    frames.append(bytes(self.pending))
                    self.pending.clear()
                elif byte & 0x80 or len(self.pending) >= self.limit - 1:
                    self.pending.clear()
                    self.resyncs += 1
                else:
                    self.pending.append(byte)
        return frames
