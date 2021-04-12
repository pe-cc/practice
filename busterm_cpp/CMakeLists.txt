cmake_minimum_required(VERSION 3.0.0)
project(busterm VERSION 0.1.0)

file(GLOB SOURCES "src/*.cpp")

add_executable(busterm ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
