cmake_minimum_required(VERSION 3.0.0)
project(C-Projects VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(C-Projects ./Main/main.c ./DataStructures/SinglyLinkedList.c ./Introduction/Introduction.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)