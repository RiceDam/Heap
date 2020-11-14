cmake_minimum_required(VERSION 3.17)
project(Heap)

set(CMAKE_CXX_STANDARD 14)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -pedantic -std=c++14")

add_executable(Heap main.cpp)