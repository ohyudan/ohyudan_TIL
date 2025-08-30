cmake_minimum_required(VERSION 4.0)
project(MODERN_Cplusplus)

set(CMAKE_CXX_STANDARD 20)

add_executable(MODERN_Cplusplus main.cpp
        project01/IAnswer.cpp
        project01/IAnswer.h
        project01/Answer01.h
        project01/project01.cpp
        project01/project01.h
        project01/Answer02.h
        project01/Answer00.h
)

