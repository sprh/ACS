# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(Task5 LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")
set(CMAKE_C_FLAGS "-pthread")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        # Headers
        region/region.h
        bees/beehive.h
        # Sources
        region/region.cpp
        bees/beehive.cpp
        helpers/sleepTimeHelper.cpp
        main.cpp)

add_executable(Task5 ${SOURCE_FILES})
