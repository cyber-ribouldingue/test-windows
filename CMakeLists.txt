cmake_minimum_required(VERSION 3.22)

project(TestApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Quick Gui Qml Test QuickTest)

# Ajouter la gestion des ressources QML
qt5_add_resources(QML_RESOURCES qml/qml.qrc)

add_executable(TestApp
    src/main.cpp
    ${QML_RESOURCES}
)

target_link_libraries(TestApp PRIVATE
    Qt5::Quick
    Qt5::Gui
    Qt5::Qml
)

enable_testing()

add_subdirectory(tests/cpp-tests)
add_subdirectory(tests/qt-tests)
add_subdirectory(tests/qml-tests)

install(TARGETS TestApp
    RUNTIME DESTINATION bin
)
