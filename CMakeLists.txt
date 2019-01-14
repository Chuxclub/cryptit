cmake_minimum_required(VERSION 3.9)
project(cryptit)

set(CMAKE_CXX_STANDARD 14)

add_executable(cryptit main.cpp std_lib_facilities.h caesar_encrypting.cpp caesar_encrypting.h termcolor.hpp TSS.cpp TSS.h)