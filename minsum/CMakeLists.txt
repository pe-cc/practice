cmake_minimum_required(VERSION 3.0.0)
project(minsum VERSION 0.1.0)

file(GLOB SOURCES "src/*.c")

add_executable(minsum ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
