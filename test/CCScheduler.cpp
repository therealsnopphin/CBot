#include "pch.h"

class $modify(cocos2d::CCScheduler)
{
	void update(float dt)
	{
		return cocos2d::CCScheduler::update(CBot::m_enablespeedhack == true ? dt * CBot::m_speed : dt);
	}
};