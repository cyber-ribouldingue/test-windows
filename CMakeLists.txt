cmake_minimum_required(VERSION 3.22)

project(TestApp VERSION 0.1 LANGUAGES CXX)

# Configuration C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Trouver Qt
find_package(Qt6 REQUIRED COMPONENTS Quick Gui Qml Test QuickTest)

# Configuration de Qt standard
qt_standard_project_setup(REQUIRES 6.8)

# Executable principal
qt_add_executable(TestApp
    src/main.cpp
)

# Ajout du module QML
qt_add_qml_module(TestApp
    URI testapp
    VERSION 1.0
    QML_FILES
        qml/Main.qml
)

# Définir les propriétés spécifiques selon la plateforme
set_target_properties(TestApp PROPERTIES
    MACOSX_BUNDLE FALSE
    WIN32_EXECUTABLE TRUE
)

# Lier Qt au projet
target_link_libraries(TestApp PRIVATE
    Qt6::Quick
    Qt6::Gui
    Qt6::Qml
)

# Compilation des bibliothèques annexes pour l'analyse statique / CodeQL
add_library(DummyIOS STATIC src/hello_ios.cpp)
add_library(CodeQLTarget STATIC src/dummy_codeql.cpp)

# Active les tests
enable_testing()

# Ajouter les tests unitaires C++
add_subdirectory(tests/cpp-tests)
add_subdirectory(tests/qt-tests)
add_subdirectory(tests/qml-tests)

# Installation optionnelle (à améliorer si besoin plus tard)
include(GNUInstallDirs)
install(TARGETS TestApp
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
