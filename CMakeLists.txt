# 指定CMake的最低版本
cmake_minimum_required(VERSION 3.21)

# 指定项目名称
project(kolbe_c)

# 设置编译选项
# 指定C++的库版本为14
set(CMAKE_CXX_STANDARD 14)

# 包含目录
include_directories(.)

# 添加可执行文件
add_executable(kolbe_c
        01_hello_world/1.1_HelloWorld.cpp)
