cmake_minimum_required(VERSION 3.29)
project(Monopoly_Game)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(../Tungsten ../bin)

find_package(spdlog CONFIG REQUIRED)

file(GLOB_RECURSE SRC *.cpp)
file(GLOB_RECURSE HEADERS *.h)

add_executable(
        Monopoly_Game
        ${SRC}
        ${HEADERS}
)

target_precompile_headers(
        Monopoly_Game
        PRIVATE
        ../Tungsten/src/Tungsten/tungstenpch.h
)

target_link_libraries(
        Monopoly_Game
        PRIVATE
        Tungsten
        spdlog::spdlog
)

target_include_directories(
        Monopoly_Game
        PRIVATE
        Monopoly
        ../Tungsten/src
)