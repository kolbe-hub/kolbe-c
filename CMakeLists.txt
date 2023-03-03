cmake_minimum_required(VERSION 3.21)
project(kolbe_c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(kolbe_c
        02_class_object/2.3_Enclosure.cpp 02_class_object/2.5_Construct.cpp 02_class_object/2.6_Destructor.cpp 02_class_object/2.7_CopyConstruct.cpp 02_class_object/2.8_ConstMember.cpp 02_class_object/2.8_StaticMember.cpp 02_class_object/2.9_FriendlyFunction.cpp)
