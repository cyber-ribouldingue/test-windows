cmake_minimum_required(VERSION 3.22)

project(QtTests LANGUAGES CXX)

enable_testing()

find_package(Qt5 REQUIRED COMPONENTS QuickTest Test Qml Quick)

add_executable(QtTests tst_test1.cpp)
add_test(NAME QtTests COMMAND QtTests)


