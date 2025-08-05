#pragma once
#include "pch.h"

enum class Clicks
{
	Soft,
	Normal
};

namespace CBot::fmodengine
{
	inline FMOD::System* system = nullptr;
	inline FMOD::Sound* sound = nullptr;
	inline std::unordered_map<std::string, FMOD::Sound*> sounds;

	void init();
	void createSound(const std::string& file);
	void createSound(const std::string& file, FMOD_MODE flags);
	void playSound(const std::string& file, float pitch, float volume);
}