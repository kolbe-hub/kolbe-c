cmake_minimum_required(VERSION 3.21)
project(kolbe_c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(kolbe_c
        02_class_object/2.3_Enclosure.cpp
        02_class_object/2.5_Construct.cpp
        02_class_object/2.6_Destructor.cpp
        02_class_object/2.7_CopyConstruct.cpp
        02_class_object/2.8_ConstMember.cpp
        02_class_object/2.8_StaticMember.cpp
        02_class_object/2.9_FriendlyFunction.cpp
        03_operator_overload/3.1_OperatorOverload.cpp
        03_operator_overload/3.2_OperatorStream.cpp
        03_operator_overload/3.2_OperatorRelation.cpp
        03_operator_overload/3.2_OperatorAssign.cpp 03_operator_overload/3.2_OperatorTag.cpp 03_operator_overload/3.3_OperatorCast.cpp 03_operator_overload/3.3_OperatorConstructorCast.cpp 03_operator_overload/3.4_OperatorFunction.cpp 03_operator_overload/3.5_OperatorSmartReference.cpp 04_inherit/4.1_Inherit.cpp 04_inherit/4.1_Compatibility.cpp 04_inherit/4.2_ConDestructor.cpp 04_inherit/4.2_Overwrite.cpp 04_inherit/4.3_MultiInherit.cpp 04_inherit/4.4_VirtualInherit.cpp 05_polymorphic/5.1_Polymorphic.cpp 05_polymorphic/5.2_VirtualPolymorphic.cpp 05_polymorphic/5.2_VirtualDestructor.cpp 05_polymorphic/5.3_Abstract.cpp 01_hello_world/1.1_HelloWorld.cpp 06_template/6.1_TemplateFunction.cpp 06_template/6.2_TemplateExplicit.cpp 06_template/6.3_TemplateClass.cpp 06_template/6.3_TemplateSubClass.cpp 07_standard_template_lib/7.2_Vector.cpp 07_standard_template_lib/7.2_VectorInterator.cpp 07_standard_template_lib/7.2_Array.cpp 07_standard_template_lib/7.2_List.cpp)
