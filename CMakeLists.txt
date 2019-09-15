cmake_minimum_required(VERSION 3.14)
project(SharedData)

set(CMAKE_CXX_STANDARD 14)

add_executable(SharedData main.cpp Singleton.cpp Singleton.h)