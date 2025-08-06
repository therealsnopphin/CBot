// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include "framework.h"

#include <Geode/fmod/fmod.hpp>
#include <Geode/fmod/fmod_errors.h>

#include <Geode/modify/FMODAudioEngine.hpp>
#include <imgui-cocos.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/modify/CCKeyboardDispatcher.hpp>
#include <future>
#include <print>
#include <urlmon.h>
#include <fstream>
#include <timeapi.h>

#include "random.h"
#include "gjbasegamelayer.h"
#include "CBot_Algorithm.h"
#include "autoupdate.h"
#include "utils.h"
#include "fmodengine.h"
#include "gui.h"
#include "config.h"

#endif //PCH_H