#include "fast_random.h"
#include <chrono>

uint32_t pcg32(uint64_t seed = 0, bool reset = false) 
{
	static uint64_t state = 0x853c49e6748fea9bULL;
	static uint64_t inc = 0xda3e39cb94b95bdbULL;

	if (reset) {
		state = 0;
		inc = (seed << 1u) | 1u;  // sequence must be odd
		state += seed + inc;
		pcg32(); // advance state once
	}

	uint64_t oldstate = state;
	state = oldstate * 6364136223846793005ULL + inc;

	uint32_t xorshifted = static_cast<uint32_t>(((oldstate >> 18u) ^ oldstate) >> 27u);
	uint32_t rot = static_cast<uint32_t>(oldstate >> 59u);

	return (xorshifted >> rot) | (xorshifted << ((32 - rot) & 31));
}

void fast_random::initalize()
{
	uint64_t seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
	pcg32(seed, true);
}

int fast_random::randomint(int start, int end)
{
	if (start == end)
		return start;

	return start + (pcg32() % (end - start + 1));
}

float fast_random::randomfloat(float start, float end)
{
	if (start == end)
		return start;

	return start + static_cast<float>(pcg32()) / static_cast<float>(UINT32_MAX) * (end - start);
}