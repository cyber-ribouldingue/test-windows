cmake_minimum_required(VERSION 3.22)

project(CppTest LANGUAGES CXX)

enable_testing()

find_package(Qt6 REQUIRED COMPONENTS Test)

add_executable(CppTest tst_cpptest.cpp)
add_test(NAME CppTest COMMAND CppTest)

target_link_libraries(CppTest PRIVATE Qt6::Test)
