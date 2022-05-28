cmake_minimum_required(VERSION 3.22)
project(LinkedList C)

set(CMAKE_C_STANDARD 17)

add_executable(LinkedList main.c listnode.c listnode.h linkedlist.c linkedlist.h)
