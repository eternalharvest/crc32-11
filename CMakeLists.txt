cmake_minimum_required(VERSION 2.8)
project(crc32++11 CXX)

set(CMAKE_CXX_FLAGS "-std=c++11 -W -Wall -ftemplate-depth=600")
set(CMAKE_CXX_FLAGS_DEBUG "-O2 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

add_executable(crc32++11 src/main.cpp)
