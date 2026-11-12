// Optional bounded-domain phase approximation; strict IEEE exceptional fallback.
#pragma once
#include <cmath>
namespace octave_shared_optimized {
inline float phaseAngle(float y, float x) {
#ifdef NC_OCTAVE_FAST_PHASE
    // Reduce atan to |z| <= tan(pi/8). The alternating series through z^17
    // has truncation error below 3e-9 radians; float rounding is measured
    // separately by check_octave_phase.cpp. Keep signed axes and nonfinite
    // inputs on libm's exact semantic path.
    if (x == 0 || y == 0 || !std::isfinite(x) || !std::isfinite(y))
        return std::atan2(y, x);
    const float ax = std::abs(x), ay = std::abs(y);
    const bool swapped = ay > ax;
    const float t = swapped ? ax / ay : ay / ax;
    const bool reduced = t > .41421356237309505f;
    const float z = reduced ? (1 - t) / (1 + t) : t;
    const float q = z * z;
    float p = 1.f / 17;
    p = -1.f / 15 + q * p;
    p = 1.f / 13 + q * p;
    p = -1.f / 11 + q * p;
    p = 1.f / 9 + q * p;
    p = -1.f / 7 + q * p;
    p = 1.f / 5 + q * p;
    p = -1.f / 3 + q * p;
    float a = z + z * q * p;
    if (reduced) a = .7853981633974483f - a;
    if (swapped) a = 1.5707963267948966f - a;
    if (x < 0) a = 3.1415926535897932f - a;
    return __builtin_copysignf(a, y);
#else
    return std::atan2(y, x);
#endif
}
}
