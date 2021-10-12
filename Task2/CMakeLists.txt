cmake_minimum_required(VERSION 3.20)
project(Task2)
add_executable(Task2 main.cpp)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        main.cpp
        )

add_executable(task ${SOURCE_FILES})
