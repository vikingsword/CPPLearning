cmake_minimum_required(VERSION 3.26)
project(BookLearning)

set(CMAKE_CXX_STANDARD 17)

add_executable(BookLearning main.cpp
        essential_c++/ch1/demo1.cpp
        essential_c++/ch1/demo2.cpp
        essential_c++/ch2/demo1.cpp
        essential_c++/ch2/demo2.cpp
        essential_c++/ch2/demo3.cpp
        essential_c++/trick/lambda.cpp
        essential_c++/ch3/demo1.cpp
        essential_c++/temp/temp1.cpp
        c++_primer/ch1/test/test01.cpp
        c++_primer/ch1/p5_p17.cpp
        c++_primer/ch1/test/test02.cpp
        c++_primer/ch1/p18.cpp
        c++_primer/ch1/headers/Sales_item.h)
