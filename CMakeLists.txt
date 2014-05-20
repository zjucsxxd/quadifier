cmake_minimum_required(VERSION 2.8)
PROJECT (quad)

find_package(OpenCV REQUIRED )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})

set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic -O3 -std=c99 ${CMAKE_C_COMPILER_FLAGS}")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -O3 -std=c++0x -DEBUG_VERBOSE_OUTPUT ${CMAKE_CXX_COMPILER_FLAGS}")

add_subdirectory(src)

link_directories( ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
