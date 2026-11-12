// Experimental shared spectral swell with symmetric analysis and short dual-window synthesis.
// Not a production engine; measured quality and wet timing govern acceptance.
// SPDX-License-Identifier: MIT
// Copyright (c) 2026 Octave Studio contributors
#pragma once
#include "../embedded/Swell.h"
#include <cmath>
#include <cstddef>
#include <cstdint>

namespace octave_shared {
using octave::Swell;
// Framework-free, mono, caller-owned DSP. No allocation, threads, file I/O or exceptions.
// Symmetric Hann analysis; short synthesis has eight overlaps and dual normalization.
// The nominal dry latency is Synthesis samples; wet onset/energy timing must be measured.
// At most 256 spectral peaks are tracked. Band-wise swell is always integrated.
struct Parameters {
    float dry = .65f, sub2 = .05f, sub1 = .3f, up1 = .65f, up2 = .35f;
    float attackMs = 0, cutoffHz = 6500, detuneCents = 0, outputDb = -9;
    int resonance = 0, dryFx = 0;
    float sensitivity = 50, thresholdDb = -60, retriggerMs = 120, retriggerDepth = 75;
};

template <int N = 1024, int Synthesis = N, bool StableBirths = false> class Core {
    static_assert(N >= 256 && (N & (N - 1)) == 0, "FFT length must be a power of two >=256");
    static_assert(Synthesis >= 64 && Synthesis <= N && (Synthesis & (Synthesis - 1)) == 0,
                  "Synthesis size must be a power of two between 64 and N");
    static constexpr int B = N / 2 + 1, H = Synthesis / 8, Mask = N - 1;
    static constexpr int Centre = N / 2;
    float synthesisWindow[Synthesis]{};
    float heldMagnitude[N / 2 + 1]{};
    float dryOverlap[Synthesis]{};
    float swellAlpha = 1;
    static constexpr float Pi = 3.14159265358979323846f, Tau = 2 * Pi;
    float input[N]{}, overlap[N]{}, real[B]{}, imag[B]{};
    // Immutable quarter-wave twiddles reside in read-only storage, shared by instances.
    struct CosTable {
        float values[N / 4 + 1]{};
        constexpr CosTable() {
            for (int i = 0; i <= N / 4; ++i) {
                double x = 6.2831853071795864769 * i / N, term = 1, sum = 1;
                for (int j = 1; j <= 10; ++j) {
                    term *= -x * x / ((2 * j - 1) * (2 * j));
                    sum += term;
                }
                values[i] = (float)sum;
            }
        }
    };
    static constexpr CosTable cosTable{};
    static float cosineAt(int i) {
        i &= Mask;
        if (i <= N / 4)
            return cosTable.values[i];
        if (i <= N / 2)
            return -cosTable.values[N / 2 - i];
        if (i <= 3 * N / 4)
            return -cosTable.values[i - N / 2];
        return cosTable.values[N - i];
    }
    static constexpr int MaxPeaks = 256;
    float magnitude[B]{}, frequency[MaxPeaks]{}, mappedMagnitude[B]{}, mappedFrequency[B]{};
    float synthesisPhase[2][4][MaxPeaks]{};
    std::uint16_t peakBins[2][MaxPeaks]{};
    int peakBank = 0, previousPeakCount = 0;
    float chorus[512]{};
    // Per-instance state: no writable globals, so independent instances never interfere.
    float sampleRate = 48000, lfo = 0, fastEnvelope = 0, slowEnvelope = 0;
    float release = .999f, attack = 0, smoothing = .001f;
    float current[6]{}, target[6]{};
    float filterG = 0, filterK = 1.41421356f, filterA = 1;
    struct Filter {
        float s1 = 0, s2 = 0;
    };
    Filter wet, dry;
    int position = 0, hop = 0, chorusPosition = 0;
    Parameters parameters;
    Swell swellEnvelope;
    static float clamp(float x, float lo, float hi) { return x < lo ? lo : (x > hi ? hi : x); }
    static float finite(float x, float fallback) { return std::isfinite(x) ? x : fallback; }
    static float wrap(float x) { // phases are bounded to a few cycles by callers
        const float cycles = x / Tau;
        const int whole = (int)(cycles + (cycles >= 0 ? .5f : -.5f));
        return x - whole * Tau;
    }
    float cosLookup(float phase) const {
        float index = phase * (N / Tau);
        int a = (int)index;
        if (index < (float)a)
            --a;
        float f = index - a;
        return cosineAt(a) + f * (cosineAt(a + 1) - cosineAt(a));
    }
    float analysisWindow(int i) const { return .5f - .5f * cosineAt(i); }
    void complexFft(bool inverse) {
        constexpr int M = N / 2;
        for (int i = 1, j = 0; i < M; ++i) {
            int bit = M >> 1;
            for (; j & bit; bit >>= 1)
                j ^= bit;
            j ^= bit;
            if (i < j) {
                float t = real[i];
                real[i] = real[j];
                real[j] = t;
                t = imag[i];
                imag[i] = imag[j];
                imag[j] = t;
            }
        }
        for (int length = 2; length <= M; length <<= 1) {
            const int half = length / 2, step = N / length;
            for (int start = 0; start < M; start += length)
                for (int j = 0; j < half; ++j) {
                    int k = j * step;
                    float wr = cosineAt(k), wi = (inverse ? 1.f : -1.f) * cosineAt(N / 4 - k);
                    int a = start + j, b = a + half;
                    float tr = wr * real[b] - wi * imag[b], ti = wr * imag[b] + wi * real[b];
                    real[b] = real[a] - tr;
                    imag[b] = imag[a] - ti;
                    real[a] += tr;
                    imag[a] += ti;
                }
        }
        if (inverse)
            for (int i = 0; i < M; ++i) {
                real[i] /= M;
                imag[i] /= M;
            }
    }
    void realFft(bool inverse) {
        constexpr int M = N / 2;
        if (!inverse)
            complexFft(false);
        // Packed real transform: one N/2 complex FFT instead of an N complex FFT.
        for (int k = 1; k <= M / 2; ++k) {
            const int j = M - k;
            float ar = real[k], ai = imag[k], br = real[j], bi = imag[j];
            auto unpack = [&](int bin, float r, float i, float rr, float ii) {
                float wr = cosineAt(bin), wi = -cosineAt(N / 4 - bin);
                float dr = r - rr, di = i + ii;
                if (inverse) {
                    real[bin] = .5f * (r + rr - wr * di + wi * dr);
                    imag[bin] = .5f * (i - ii + wr * dr + wi * di);
                } else {
                    real[bin] = .5f * (r + rr + wr * di + wi * dr);
                    imag[bin] = .5f * (i - ii + wi * di - wr * dr);
                }
            };
            unpack(k, ar, ai, br, bi);
            if (k != j)
                unpack(j, br, bi, ar, ai);
        }
        if (inverse) {
            float dc = real[0], nyquist = real[M];
            real[0] = .5f * (dc + nyquist);
            imag[0] = .5f * (dc - nyquist);
            complexFft(true);
        } else {
            float r = real[0], i = imag[0];
            real[0] = r + i;
            real[M] = r - i;
            imag[0] = imag[M] = 0;
        }
    }
    float lowpass(float x, Filter &f) {
        // TPT state-variable lowpass: stable under cutoff changes.
        const float a = filterA;
        float v1 = (f.s1 + filterG * (x - f.s2)) * a;
        float v2 = f.s2 + filterG * v1;
        f.s1 = 2 * v1 - f.s1;
        f.s2 = 2 * v2 - f.s2;
        // Flush numerical subnormals without platform-specific processor flags.
        if (std::abs(f.s1) < 1e-20f)
            f.s1 = 0;
        if (std::abs(f.s2) < 1e-20f)
            f.s2 = 0;
        return v2;
    }
    void analyseAndSynthesize() {
        // Centre the Hann window at time zero before the FFT. Fractional spectral
        // interpolation otherwise cancels alternating-sign neighbouring bins.
        for (int i = 0; i < N; ++i) {
            int centred = (i + N - Centre) & Mask;
            float x = input[(position + i) & Mask] * analysisWindow(i);
            (centred & 1 ? imag[centred / 2] : real[centred / 2]) = x;
        }
        realFft(false);
        float maximumMagnitude = 0;
        for (int k = 0; k < B; ++k) {
            // Peak detection only needs squared magnitudes: no per-bin sqrt/atan.
            magnitude[k] = real[k] * real[k] + imag[k] * imag[k];
            if (magnitude[k] > maximumMagnitude)
                maximumMagnitude = magnitude[k];
        }
        int peakCount = 0;
        auto &peaks = peakBins[peakBank];
        const auto &previousPeaks = peakBins[1 - peakBank];
        for (int k = 1; k < B - 1 && peakCount < MaxPeaks; ++k) {
            float m = magnitude[k];
            if (m > maximumMagnitude * .000001f && m > magnitude[k - 1] && m >= magnitude[k + 1]) {
                peaks[peakCount++] = (std::uint16_t)k;
                // Phase advance from the cross-spectrum. Only resolved peaks need
                // precise phase; the old coarse per-bin atan introduced sidebands.
                float re = real[k] * mappedMagnitude[k] + imag[k] * mappedFrequency[k];
                float im = imag[k] * mappedMagnitude[k] - real[k] * mappedFrequency[k];
                float expected = Tau * (k % (N / H)) / (N / H);
                frequency[peakCount - 1] = Tau * k / N + wrap(std::atan2(im, re) - expected) / H;
            }
        }
        int matchedPeak[StableBirths ? MaxPeaks : 1]{};
        if (StableBirths) {
            // A new spectral peak must not borrow an unrelated sustained peak's
            // accumulated rotation. Require reciprocal nearest-neighbour matching.
            for (int p = 0; p < peakCount; ++p) {
                int best = -1, distance = 3;
                for (int q = 0; q < previousPeakCount; ++q) {
                    int d = std::abs(int(peaks[p]) - int(previousPeaks[q]));
                    if (d < distance) { distance = d; best = q; }
                }
                if (best >= 0) {
                    for (int other = 0; other < peakCount; ++other) {
                        int d = std::abs(int(peaks[other]) - int(previousPeaks[best]));
                        if (d < distance || (d == distance && other < p)) { best = -1; break; }
                    }
                }
                matchedPeak[p] = best;
                if (best < 0) {
                    int k = peaks[p];
                    float left = std::log(magnitude[k-1] + 1e-30f);
                    float centre = std::log(magnitude[k] + 1e-30f);
                    float right = std::log(magnitude[k+1] + 1e-30f);
                    float denominator = left - 2*centre + right;
                    float correction = denominator < -1e-8f ? .5f*(left-right)/denominator : 0;
                    frequency[p] = Tau*(k + clamp(correction,-.5f,.5f))/N;
                }
            }
        }
#ifdef OCTAVE_SHARED_TRACE
        OCTAVE_SHARED_TRACE(peakCount, peaks, frequency, N, H, sampleRate);
#endif
        for (int k = 0; k < B; ++k) {
            mappedMagnitude[k] = real[k];
            mappedFrequency[k] = imag[k];
        }
        {
            for (int k = 0; k < B; ++k) {
                float mag = std::sqrt(magnitude[k]);
                float &held = heldMagnitude[k];
                held = mag < held ? mag : held + swellAlpha * (mag - held);
                magnitude[k] = mag > 1e-12f ? .05f + .95f * held / mag : 0;
            }
            if (parameters.attackMs >= .1f && current[0] > 1e-7f) {
                for (int k = 0; k < B; ++k) {
                    real[k] *= magnitude[k];
                    imag[k] *= magnitude[k];
                }
                realFft(true);
                for (int j = 0; j < Synthesis; ++j) {
                    int i = N - Synthesis + j;
                    int index = (i + N - Centre) & Mask;
                    float x = index & 1 ? imag[index / 2] : real[index / 2];
                    dryOverlap[(position + j) & (Synthesis - 1)] += x * synthesisWindow[j];
                }
            }
        }
        for (int i = 0; i < B; ++i) {
            real[i] = 0;
            imag[i] = 0;
        }
        const float ratios[] = {.25f, .5f, 2.f, 4.f};
        for (int voice = 0; voice < 4; ++voice) {
            if (target[voice + 1] == 0 && current[voice + 1] < 1e-7f)
                continue;
            float ratio = ratios[voice];
            if (voice >= 2) {
                float cents = parameters.detuneCents * cosLookup(lfo + (voice - 2) * 1.8f);
                float z = cents * (.69314718056f / 1200.f);
                ratio *= 1 + z + .5f * z * z;
            }
            int previousOwner = 0;
            for (int p = 0; p < peakCount; ++p) {
                const int peak = peaks[p];
                const int first = p == 0 ? 1 : (peaks[p - 1] + peak) / 2 + 1;
                const int last = p + 1 == peakCount ? B - 2 : (peak + peaks[p + 1]) / 2;
                // Translate a peak's whole neighbourhood, rather than squeezing
                // independent bins into one frequency with incompatible phases.
                while (previousOwner + 1 < previousPeakCount &&
                       peak > (previousPeaks[previousOwner] + previousPeaks[previousOwner + 1]) / 2)
                    ++previousOwner;
                float delta = (ratio - 1) * frequency[p];
                const int match = StableBirths ? matchedPeak[p] : (previousPeakCount ? previousOwner : -1);
                float previousRotation = match >= 0 ? synthesisPhase[1 - peakBank][voice][match] : 0;
                float rotation = wrap(previousRotation + delta * H);
                if ((StableBirths && match < 0) || (!StableBirths && Synthesis != N && previousPeakCount == 0))
                    rotation = wrap((ratio - 1) * std::atan2(mappedFrequency[peak], mappedMagnitude[peak]));
                synthesisPhase[peakBank][voice][p] = rotation;
                if (frequency[p] * ratio <= 0 || frequency[p] * ratio >= Pi)
                    continue;
                float shift = delta * (N / Tau);
                int whole = (int)shift;
                if (shift < (float)whole)
                    --whole;
                float fraction = shift - whole;
                float c = cosLookup(rotation) * current[voice + 1];
                float si = cosLookup(rotation - Pi * .5f) * current[voice + 1];
                for (int k = first; k <= last; ++k) {
                    float re = mappedMagnitude[k] * c - mappedFrequency[k] * si;
                    float im = mappedMagnitude[k] * si + mappedFrequency[k] * c;
                    {
                        re *= magnitude[k];
                        im *= magnitude[k];
                    }
                    // Fractional translation of the centred complex spectrum.
                    for (int part = 0; part < 2; ++part) {
                        int bin = k + whole + part;
                        float weight = part ? fraction : 1 - fraction;
                        // The negative-frequency region folds by conjugation.
                        bool negative = bin < 0;
                        if (negative)
                            bin = -bin;
                        if (bin > 0 && bin < B - 1) {
                            real[bin] += re * weight;
                            imag[bin] += (negative ? -im : im) * weight;
                        }
                    }
                }
            }
        }
        previousPeakCount = peakCount;
        peakBank = 1 - peakBank;
        realFft(true);
        for (int i = N - Synthesis; i < N; ++i) {
            int index = (i + N - Centre) & Mask;
            float x = index & 1 ? imag[index / 2] : real[index / 2];
            float window = synthesisWindow[i - (N - Synthesis)];
            overlap[(position + i - (N - Synthesis)) & Mask] += x * window;
        }
        lfo = wrap(lfo + Tau * (.2f + parameters.detuneCents * .025f) * H / sampleRate);
    }

  public:
    static constexpr int fftSize = N, hopSize = H, latencySamples = Synthesis;
    void prepare(float sr) {
        sampleRate = clamp(finite(sr, 48000), 8000, 192000);
        {
            for (int i = 0; i < Synthesis; ++i) {
                float sum = 0;
                for (int j = i % H; j < Synthesis; j += H)
                    sum += analysisWindow(N - Synthesis + j) * (.5f - .5f * cosineAt(j * N / Synthesis));
                synthesisWindow[i] = (.5f - .5f * cosineAt(i * N / Synthesis)) / sum;
            }
        }
        swellEnvelope.prepare(sampleRate);
        release = std::exp(-1.f / (sampleRate * .05f));
        smoothing = 1 - std::exp(-1.f / (sampleRate * .02f));
        filterG = attack = 0;
        swellAlpha = parameters.attackMs < .1f
                         ? 1.f
                         : 1 - std::exp(-3.f * H / (sampleRate * parameters.attackMs * .001f));
        setParameters(parameters);
        reset();
    }
    void setParameters(Parameters p) {
        p.dry = clamp(finite(p.dry, 0), 0, 1);
        p.sub2 = clamp(finite(p.sub2, 0), 0, 1);
        p.sub1 = clamp(finite(p.sub1, 0), 0, 1);
        p.up1 = clamp(finite(p.up1, 0), 0, 1);
        p.up2 = clamp(finite(p.up2, 0), 0, 1);
        p.attackMs = clamp(finite(p.attackMs, 0), 0, 2000);
        p.cutoffHz = clamp(finite(p.cutoffHz, 6500), 150, sampleRate * .45f);
        p.detuneCents = clamp(finite(p.detuneCents, 0), 0, 30);
        p.outputDb = clamp(finite(p.outputDb, -12), -36, 6);
        p.resonance = p.resonance < 0 ? 0 : (p.resonance > 3 ? 3 : p.resonance);
        p.dryFx = p.dryFx < 0 ? 0 : (p.dryFx > 3 ? 3 : p.dryFx);
        if (p.attackMs != parameters.attackMs)
            swellAlpha = p.attackMs < .1f ? 1.f : 1 - std::exp(-3.f * H / (sampleRate * p.attackMs * .001f));
        // Exp/tan/pow are control-rate only, and skipped when controls are unchanged.
        if (p.attackMs != parameters.attackMs || attack == 0)
            attack = std::exp(-1.f / (sampleRate * (p.attackMs > .1f ? p.attackMs * .001f : .001f)));
        if (p.cutoffHz != parameters.cutoffHz || filterG == 0)
            filterG = std::tan(Pi * p.cutoffHz / sampleRate);
        const float qs[] = {.70710678f, 1.f, 1.8f, 3.f};
        filterK = 1 / qs[p.resonance];
        filterA = 1 / (1 + filterG * (filterG + filterK));
        target[0] = p.dry;
        target[1] = p.sub2;
        target[2] = p.sub1;
        target[3] = p.up1;
        target[4] = p.up2;
        if (p.outputDb != parameters.outputDb || target[5] == 0)
            target[5] = std::pow(10.f, p.outputDb * .05f);
        swellEnvelope.controls(p.sensitivity, p.thresholdDb, p.retriggerMs, p.retriggerDepth);
        parameters = p;
    }
    void swellControls(float sensitivity, float threshold, float interval, float depth) {
        auto p = parameters;
        p.sensitivity = sensitivity;
        p.thresholdDb = threshold;
        p.retriggerMs = interval;
        p.retriggerDepth = depth;
        setParameters(p);
    }
    void reset() {
        swellEnvelope.reset();
        for (auto &x : heldMagnitude)
            x = 0;
        for (auto &x : dryOverlap)
            x = 0;
        for (int i = 0; i < N; ++i) {
            input[i] = overlap[i] = 0;
        }
        for (int k = 0; k < B; ++k) {
            real[k] = imag[k] = mappedMagnitude[k] = mappedFrequency[k] = 0;
        }
        previousPeakCount = peakBank = 0;
        for (auto &bank : synthesisPhase)
            for (auto &voice : bank)
                for (auto &phase : voice)
                    phase = 0;
        for (auto &x : chorus)
            x = 0;
        for (int i = 0; i < 6; ++i)
            current[i] = target[i];
        wet = {};
        dry = {};
        position = hop = chorusPosition = 0;
        lfo = fastEnvelope = slowEnvelope = 0;
    }
    void process(const float *in, float *out, std::size_t samples) {
        // Arbitrary block lengths, including in-place operation and zero samples.
        for (std::size_t i = 0; i < samples; ++i) {
            float x = clamp(finite(in[i], 0), -8, 8), delayed = input[(position + N - Synthesis) & Mask],
                  wetSample = overlap[position];
            input[position] = x;
            overlap[position] = 0;
            for (int g = 0; g < 6; ++g)
                current[g] += smoothing * (target[g] - current[g]);
            float swell = 1.f;
            float d = delayed;
            {
                if (parameters.attackMs >= .1f)
                    d = dryOverlap[position & (Synthesis - 1)];
                dryOverlap[position & (Synthesis - 1)] = 0;
            }
            chorus[chorusPosition] = d;
            if (parameters.dryFx == 3 && parameters.detuneCents > 0) {
                float offset = 180 + 60 * (parameters.detuneCents / 30) * cosLookup(lfo);
                float read = chorusPosition - offset;
                if (read < 0)
                    read += 512;
                int a = (int)read;
                float f = read - a;
                d = .5f * d + .5f * (chorus[a] * (1 - f) + chorus[(a + 1) & 511] * f);
            }
            chorusPosition = (chorusPosition + 1) & 511;
            if (parameters.dryFx >= 1)
                d *= swell;
            if (parameters.dryFx >= 2)
                d = lowpass(d, dry);
            out[i] = finite((current[0] * d + lowpass(wetSample * swell, wet)) * current[5], 0);
            position = (position + 1) & Mask;
            if (++hop == H) {
                hop = 0;
                analyseAndSynthesize();
            }
        }
    }
};
template <int N, int S, bool Stable> constexpr typename Core<N, S, Stable>::CosTable Core<N, S, Stable>::cosTable;
} // namespace octave_shared
