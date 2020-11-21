cmake_minimum_required(VERSION 3.16)
project(C_on_linux)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_on_linux main.cpp matrix.h Numbers.cpp Numbers.h)