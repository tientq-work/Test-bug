cmake_minimum_required(VERSION 3.10)
project(TestBugLLI64)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(TestBugLLI64 src/main.cpp src/math_ops.cpp src/math_extra.cpp src/array_ops.cpp)
