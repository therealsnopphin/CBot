#include "pch.h"

bool CBot::autoupdate::CheckForNewUpdate()
{
    const char* url = "https://github.com/therealsnopphin/CBot/releases";
    const char* localFile = "releases.html";

    HRESULT hr = URLDownloadToFileA(NULL, url, localFile, 0, NULL);

    // Read and display the HTML content
    std::ifstream file(localFile);
    std::string line;
    std::string toFind = "CBot " + gui::m_Currentversion;

    while (std::getline(file, line)) {
        if (line.contains(toFind)) {
            return false;
        }
    }

    return true;
}