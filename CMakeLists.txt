cmake_minimum_required(VERSION 3.12)
project(thread_for_demo)

set(CMAKE_CXX_STANDARD 11)

find_package(Threads REQUIRED)

add_executable(thread_for_demo
        main.cpp ThreadDemo.cpp ThreadDemo.h)

target_link_libraries(thread_for_demo Threads::Threads)