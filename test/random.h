#pragma once
#include <vector>
#include <algorithm>

namespace random
{
	void initalize();
	int intRandom(int Begin, int End);
	float floatRandom(float Begin, float End);
	
	class UniqueRandom
	{
	private:
		std::vector<int> indices;
		int currentIndex;
		bool initialized;
	
	public:
		UniqueRandom() : currentIndex(0), initialized(false) {}
		
		void reset(int min, int max);
		int getNext();
		bool hasMore() const;
	};
}