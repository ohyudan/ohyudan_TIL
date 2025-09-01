cmake_minimum_required(VERSION 4.0)
project(TIL)

set(CMAKE_CXX_STANDARD 20)

add_executable(TIL main.cpp
        ModernCplusplus/project01/IAnswer.cpp
        ModernCplusplus/project01/project01.cpp
        ModernCplusplus/project01/IAnswer.h
        ModernCplusplus/project01/Answer01.h
        ModernCplusplus/project01/project01.h
        ModernCplusplus/project01/Answer02.h
        ModernCplusplus/project01/Answer00.h
        ModernCplusplus/project01/Answer03.h
)

