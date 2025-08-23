#include "pch.h"

constexpr std::string macrofolder = ".cbot\\macros\\";

void CBot::macro::save(std::string filename)
{
    if (filename.ends_with(".cbot") == false)
    {
        filename += ".cbot";
    }
    std::ofstream configFile(macrofolder + filename, std::ios::binary);

    configFile.write((char*)&CBot::m_tps, sizeof(CBot::m_tps));

    size_t inputfilesize = m_inputactions.size();

    configFile.write((char*)&inputfilesize, sizeof(inputfilesize));

    // Write raw data
    configFile.write((char*)(m_inputactions.data()), inputfilesize * sizeof(action));

    size_t physicsfilesize = m_physicsactions.size();

    configFile.write((char*)&physicsfilesize, sizeof(physicsfilesize));

    // Write raw data
    configFile.write((char*)(m_physicsactions.data()), physicsfilesize * sizeof(physicsaction));

    configFile.close();
}

void CBot::macro::load(std::string filename)
{
    if (filename.ends_with(".cbot") == false)
    {
        filename += ".cbot";
    }

    std::ifstream configFile(macrofolder + filename, std::ios::binary);

    configFile.read((char*)&CBot::m_tps, sizeof(CBot::m_tps));

    size_t inputfilesize;
    configFile.read((char*)(&inputfilesize), sizeof(inputfilesize));

    m_inputactions.resize(inputfilesize);
    configFile.read((char*)(m_inputactions.data()),
        inputfilesize * sizeof(action));

    size_t physicsfilesize;
    configFile.read((char*)(&physicsfilesize), sizeof(physicsfilesize));

    m_physicsactions.resize(physicsfilesize);
    configFile.read((char*)(m_physicsactions.data()),
        physicsfilesize * sizeof(physicsaction));

    configFile.close();
}
