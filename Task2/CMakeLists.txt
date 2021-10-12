cmake_minimum_required(VERSION 3.20)
project(Task2)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        container/container.h
        shape/shape.h
        random/random.h
        shape/point/point.h
        shape/rectangle/rectangle.h
        shape/color/color.h

        container/container.cpp
        shape/shape.cpp
        shape/point/point.cpp
        shape/rectangle/rectangle.cpp
        shape/color/color.cpp
        main.cpp shape/circle/circle.cpp shape/circle/circle.h shape/triangle/triangle.cpp shape/triangle/triangle.h extension/extension.h)

add_executable(task ${SOURCE_FILES})
