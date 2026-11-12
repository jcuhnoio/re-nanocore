// SPDX-License-Identifier: MIT
#pragma once
#include <cmath>
#include <cstdint>
namespace octave {
// Global onset detector + continuous gain ramp; no allocation or waveform-rate gain division.
class Swell {
    float rate = 48000, detector = 0, fast = 0, baseline = 0, progress = 0, gain = 0, startGain = 0;
    float release = 0, slew = 0, fastCoeff = 0, slowCoeff = 0;
    float sensitivity = 50, floor = .001f, intervalMs = 120, depth = .75f;
    int quiet = 0, elapsed = 0;
    bool active = false, armed = false;
    std::uint32_t triggers = 0;
    static float limit(float x, float lo, float hi) {
        return std::isfinite(x) ? (x < lo ? lo : (x > hi ? hi : x)) : lo;
    }

  public:
    void controls(float sensitivityPercent, float thresholdDb, float interval, float depthPercent) {
        sensitivity = limit(sensitivityPercent, 0, 100);
        floor = std::pow(10.f, limit(thresholdDb, -90, -20) * .05f);
        intervalMs = limit(interval, 20, 1000);
        depth = limit(depthPercent, 0, 100) * .01f;
    }
    void prepare(float sr) {
        rate = sr;
        release = std::exp(-1.f / (sr * .025f));
        slew = 1 - std::exp(-1.f / (sr * .006f));
        fastCoeff = 1 - std::exp(-1.f / (sr * .005f));
        slowCoeff = 1 - std::exp(-1.f / (sr * .060f));
        reset();
    }
    void reset() {
        detector = fast = baseline = progress = gain = startGain = 0;
        quiet = elapsed = 0;
        active = armed = false;
        triggers = 0;
    }
    std::uint32_t triggerCount() const { return triggers; }
    float process(float level, float attackMs) {
        detector = level > detector ? level : detector * release;
        fast += fastCoeff * (level - fast);
        baseline += slowCoeff * (level - baseline);
        if (elapsed < (int)rate * 10)
            ++elapsed;
        const float rise = .10f + (1 - sensitivity * .01f) * 0.80f;
        if (fast < baseline * (1 + rise * .35f))
            armed = true;
        bool onset = !active && detector > floor;
        bool retrigger = active && armed && sensitivity > 0 && fast > floor && fast > baseline * (1 + rise) &&
                         elapsed >= rate * intervalMs * .001f;
        if (onset || retrigger) {
            startGain = onset ? 0 : gain * (1 - depth);
            progress = 0;
            elapsed = 0;
            quiet = 0;
            active = true;
            armed = false;
            ++triggers;
        }
        if (active) {
            if (detector < floor * .32f) {
                if (++quiet > (int)(rate * .03f))
                    active = false;
            } else
                quiet = 0;
        }
        if (attackMs < .1f)
            return 1;
        float target = 0;
        if (active) {
            progress += 1.f / (rate * attackMs * .001f);
            if (progress > 1)
                progress = 1;
            float ramp = progress * progress * (3 - 2 * progress);
            target = startGain + (1 - startGain) * ramp;
        }
        gain += slew * (target - gain);
        if (gain < 1e-20f)
            gain = 0;
        return gain;
    }
};
} // namespace octave
