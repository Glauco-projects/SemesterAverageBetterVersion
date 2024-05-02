cmake_minimum_required(VERSION 3.15)
project(school CXX)

add_executable(school_input)

target_sources(
    school_input
    PRIVATE
        calculus.h
        calculus.cpp
        course.h
        course.cpp
        data_structures.h
        data_structures.cpp
        student.h
        student.cpp
        functions.h
        functions.cpp
        main.cpp
)

target_include_directories(
    school_input
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}   
)