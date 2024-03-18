# 第1章：简介

## 1 不同的引入方式区别
```c
// 代表从标准的类库中寻找
#include <stdio.h>

// 代表优先从当前目录录找依赖，找不到则从标准库寻找
#include "stdio.h" 
```

## 2 标准输出函数库
在C语言中使用的是 `#include <stdio.h>`  
在C++语言中使用的是 `#include <iostream>`

## 3 Make VS CMake
1) Make和CMake均用于构建C或C++语言，通过配置文件，将源码转换成可执行文件
2) Make通常使用Makefile用作构建配置
3) CMake通常使用CMakeLists用作构建配置


## 4 CMakeLists.txt语法简介
```text
# 指定 CMake 最低版本
# 这行代码指定了项目所需的最低 CMake 版本
cmake_minimum_required(VERSION 3.0)

# 定义项目名称
# 这行代码定义了项目的名称
project(MyProject)
   
# 添加可执行文件
# 这行代码添加了一个可执行文件，并指定了源文件（main.cpp）
add_executable(MyExecutable main.cpp)

# 添加库文件
# 这行代码添加了一个库文件，并指定了源文件（library.cpp）
add_library(MyLibrary library.cpp)

# 包含目录
# 这行代码将 include 目录添加到项目的包含目录中
include_directories(include)

# 添加链接库
# 这行代码将 MyLibrary 库链接到 MyExecutable 可执行文件中
target_link_libraries(MyExecutable MyLibrary)

# 设置编译选项
# 这行代码设置了 C++ 编译器的标准为 C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 设置源文件列表
# 这行代码定义了一个包含多个源文件的变量
set(SOURCE_FILES main.cpp file1.cpp file2.cpp)
```
