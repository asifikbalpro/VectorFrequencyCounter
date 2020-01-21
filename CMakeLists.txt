cmake_minimum_required(VERSION 3.7)
project(VectorFrequencyCounter)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/VectorCounter.cpp src/VectorCounter.h)
add_executable(VectorFrequencyCounter ${SOURCE_FILES})