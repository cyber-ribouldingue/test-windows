cmake_minimum_required(VERSION 3.22)

project(QmlTests LANGUAGES CXX)

enable_testing()

find_package(Qt5 REQUIRED COMPONENTS QuickTest Test Qml Quick)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_definitions(-DQUICK_TEST_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(QmlTests main.cpp setup.cpp)
add_test(NAME QmlTests COMMAND QmlTests)


