#include "pch.h"
#include "random.h"
#include <algorithm>
#include <random>

namespace random
{
	uint32_t pcg32(uint64_t seed = 0, bool reset = false) {
		static uint64_t state = 0x853c49e6748fea9bULL;
		static uint64_t inc = 0xda3e39cb94b95bdbULL;

		if (reset) {
			state = 0;
			inc = (seed << 1u) | 1u;  // sequence must be odd
			state += seed + inc;
			pcg32(); // advance state once
		}

void UniqueRandom::reset(int min, int max)
{
	indices.clear();
	for (int i = min; i <= max; ++i)
	{
		indices.push_back(i);
	}
	
	std::shuffle(indices.begin(), indices.end(), std::default_random_engine(pcg32()));
	currentIndex = 0;
	initialized = true;
}

int UniqueRandom::getNext()
{
	if (!initialized || currentIndex >= indices.size())
	{
		return -1; 
	}
	
	return indices[currentIndex++];
}

bool UniqueRandom::hasMore() const
{
	return initialized && currentIndex < indices.size();
}

		uint64_t oldstate = state;
		state = oldstate * 6364136223846793005ULL + inc;

		uint32_t xorshifted = static_cast<uint32_t>(((oldstate >> 18u) ^ oldstate) >> 27u);
		uint32_t rot = static_cast<uint32_t>(oldstate >> 59u);

		return (xorshifted >> rot) | (xorshifted << ((32 - rot) & 31));
	}

	void initalize()
	{
		uint64_t seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
		pcg32(seed, true); // randomized seed once
	}

	int intRandom(int Begin, int End)
	{
		if (Begin == End)
			return Begin;

		return Begin + (pcg32() % (End - Begin + 1));
	}

	float floatRandom(float Begin, float End)
	{
		if (Begin == End)
			return Begin;

		return Begin + static_cast<float>(pcg32()) / static_cast<float>(UINT32_MAX) * (End - Begin);
	}
}