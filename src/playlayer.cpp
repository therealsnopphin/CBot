#include <Geode/modify/PlayLayer.hpp>
#include "utilities/SimpleFMOD.h"

class $modify(PlayLayer)
{
	virtual void postUpdate(float deltatime)
	{
		SimpleFMOD& SFmod = SimpleFMOD::GetInstance();
		SFmod.update();
		return PlayLayer::postUpdate(deltatime);
	}
};