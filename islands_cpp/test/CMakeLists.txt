cmake_minimum_required(VERSION 3.0.0)
project(islands_test VERSION 0.1.0)

include(CTest)

enable_testing()

file(GLOB SOURCES "../src/*.cpp")

add_executable(islands_test ${SOURCES} countIslands_test.cpp)

