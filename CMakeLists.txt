cmake_minimum_required(VERSION 3.29)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_SCAN_FOR_MODULES ON)

project(main)

add_executable(main main.cpp)
