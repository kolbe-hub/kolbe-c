cmake_minimum_required(VERSION 3.21)
project(kolbe_c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(kolbe_c
        02_类和对象/Student.cpp 02_类和对象/Clock.cpp 02_类和对象/Rabbit.cpp 02_类和对象/Sheep.cpp 02_类和对象/Person.cpp 02_类和对象/StaticMember.cpp)
