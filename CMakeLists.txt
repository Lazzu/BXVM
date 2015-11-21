cmake_minimum_required(VERSION 3.3)
project(BXVM)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp VM.cpp VM.h Instructions/Instruction.cpp Instructions/Instruction.h Instructions/HelloWorldInstruction.cpp Instructions/HelloWorldInstruction.h Program.cpp Program.h)
add_executable(BXVM ${SOURCE_FILES})