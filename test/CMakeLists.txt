cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if ("${CMAKE_SYSTEM_NAME}" STREQUAL "iOS" OR IOS)
    set(CMAKE_OSX_ARCHITECTURES "arm64")
    add_definitions(-DGLES_SILENCE_DEPRECATION)
else()
    set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
endif()
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

project(test-mod)

file(GLOB SOURCES
    "*.cpp"
    "*.hpp"
    "*.h"
    "*.lib"
)

add_library(test-mod SHARED ${SOURCES})


add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

target_link_libraries(test-mod
    imgui-cocos
    urlmon
    winmm
)

setup_geode_mod(test-mod)
