cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_COMPILER "/usr/bin/g++-12")
set(CMAKE_CXX_STANDARD 23)

project(Lynx LANGUAGES CXX)

add_subdirectory(${PROJECT_SOURCE_DIR}/source)
add_subdirectory(${PROJECT_SOURCE_DIR}/example)
