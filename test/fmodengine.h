#pragma once


enum class Clicks
{
	Soft,
	Normal
};
namespace CBot
{
	namespace fmodengine
	{
		void init();
		void createSound(std::string file);
		void playSound(std::string file, float Pitch, float Volume);

		inline FMOD::System* system = nullptr;
		inline std::unordered_map<std::string, FMOD::Sound*> sounds;
		inline FMOD::Sound* sound = nullptr;
	}
}