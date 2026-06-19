#include "SimpleFMOD.h"

void SimpleFMOD::Initalize()
{
	FMOD::System_Create(&m_system);
	m_system->init(1500, FMOD_INIT_NORMAL, nullptr);
}

void SimpleFMOD::LoadSound(std::string soundpath)
{
	m_threads.push_back(std::async(std::launch::async, [this, soundpath]() 
		{			
		FMOD::Sound* ramclicksound = nullptr;
		m_system->createSound(soundpath.c_str(), FMOD_DEFAULT | FMOD_CREATESAMPLE, nullptr, &ramclicksound);
		std::lock_guard<std::mutex> lock(m_mutex);
		m_sounds[soundpath] = ramclicksound;
		}));
}

void SimpleFMOD::playSound(const char* soundpath, float Volume)
{
	FMOD::Channel* currentchannel = nullptr;
	m_system->playSound(m_sounds[soundpath], nullptr, false, &currentchannel);
	currentchannel->setVolume(Volume);
}