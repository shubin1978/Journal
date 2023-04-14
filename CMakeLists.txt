cmake_minimum_required(VERSION 3.24)
project(Journal)

set(CMAKE_CXX_STANDARD 17)

add_executable(Journal main.cpp FileHelper.h ConsoleHelper.h Journal.h)
