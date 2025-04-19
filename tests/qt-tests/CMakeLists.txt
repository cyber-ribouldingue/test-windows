cmake_minimum_required(VERSION 3.22)

project(QtTests LANGUAGES CXX)

enable_testing()

find_package(Qt6 REQUIRED COMPONENTS Gui Test)

add_executable(QtTests tst_test1.cpp)
add_test(NAME QtTests COMMAND QtTests)

target_link_libraries(QtTests PRIVATE Qt6::Gui Qt6::Test)
