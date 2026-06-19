#pragma once
#include <Geode/fmod/fmod.hpp>
#include <future>

class SimpleFMOD
{
public:
	void Initalize();
	void LoadSound(std::string soundpath); 
	void playSound(const char* soundpath, float Volume);
	inline void update() { m_system->update(); }
	static SimpleFMOD& GetInstance()
	{
		static SimpleFMOD instance;
		return instance;
	}
private:
	FMOD::System* m_system = nullptr;

	std::mutex m_mutex;
	std::vector<std::future<void>> m_threads;
	std::unordered_map<std::string, FMOD::Sound*> m_sounds;
};