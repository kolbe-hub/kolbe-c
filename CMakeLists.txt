cmake_minimum_required(VERSION 3.21)
project(kolbe_c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(kolbe_c__
        hello.cpp
        hello.h)
