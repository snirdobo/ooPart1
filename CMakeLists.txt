cmake_minimum_required(VERSION 3.15)
project(ooPart1)

set(CMAKE_CXX_STANDARD 14)

add_executable(ooPart1 main.cpp citizen.cpp citizen.h party.cpp party.h date.cpp date.h electionRound.cpp electionRound.h)