cmake_minimum_required(VERSION 3.22)

project(QmlTests LANGUAGES CXX)

enable_testing()

find_package(Qt6 REQUIRED COMPONENTS QuickTest Qml)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_definitions(-DQUICK_TEST_SOURCE_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(QmlTests main.cpp setup.cpp)
add_test(NAME QmlTests COMMAND QmlTests)

target_link_libraries(QmlTests PRIVATE Qt6::QuickTest Qt6::Qml)
