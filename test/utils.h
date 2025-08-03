#pragma once
#include "pch.h"

inline void enableconsole()
{
    AllocConsole();

    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
    freopen("CONIN$", "r", stdin); 
}

struct XorShift128Plus {
    uint64_t state0;
    uint64_t state1;

    XorShift128Plus(uint64_t seed1 = 1, uint64_t seed2 = 2)
        : state0(seed1), state1(seed2) {
    }

    uint64_t next() {
        uint64_t s1 = state0;
        const uint64_t s0 = state1;
        state0 = s0;
        s1 ^= s1 << 23;
        state1 = s1 ^ s0 ^ (s1 >> 17) ^ (s0 >> 26);
        return state1 + s0;
    }

    // Generates a double in the range [0, 1)
    double nextDouble() {
        return (next() >> 11) * (1.0 / (1ULL << 53));
    }
};