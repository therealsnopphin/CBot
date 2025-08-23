#include "pch.h"

void CBot::fmodengine::init()
{   
	std::println("Copying gd's audio fmod system to CBot system");
	CBot::fmodengine::system = FMODAudioEngine::get()->m_system;
}

void CBot::fmodengine::createSound(std::string file)
{
	futures.push_back(std::async(std::launch::async, [file]() {
		FMOD::Sound* ramclicksound = nullptr;
		std::println("Creating sound named {0}, result = {1}", file, FMOD_ErrorString(fmodengine::system->createSound(file.c_str(), FMOD_DEFAULT | FMOD_CREATESAMPLE, nullptr, &ramclicksound)));
		std::lock_guard<std::mutex> lock(mutex);
		sounds[file] = ramclicksound;
		}));
}

void CBot::fmodengine::playSound(std::string file, float Pitch, float Volume)
{
	FMOD::Channel* currentchannel = nullptr;
	FMOD_RESULT result_sound = fmodengine::system->playSound(sounds[file], nullptr, true, &currentchannel);
	if (result_sound != FMOD_RESULT::FMOD_OK)
	{
		std::println("Error while playing sound named {0}, result = {1}", file, FMOD_ErrorString(result_sound));
		return;
	}

	currentchannel->setVolume(Volume);
	currentchannel->setPitch(CBot::m_speed + Pitch);
	if (m_randomPanning)
	{
		currentchannel->setPan(random::floatRandom(-0.35f, 0.75f));
	}

	currentchannel->setPaused(false);

	fmodengine::system->update();
}
