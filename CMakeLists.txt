cmake_minimum_required(VERSION 3.15)
project(bus)

set(CMAKE_CXX_STANDARD 17)

add_executable(bus main.cpp busC.cpp busC.h busses.cpp busses.h)