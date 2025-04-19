cmake_minimum_required(VERSION 3.22)

project(TestApp VERSION 0.1 LANGUAGES CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Utiliser Qt5
find_package(Qt5 REQUIRED COMPONENTS Quick Gui Qml Test QuickTest)

# Créer l'exécutable principal
add_executable(TestApp
    src/main.cpp
)

# Ajouter support aux ressources QML si nécessaire
# Sinon commenter cette ligne
# qt5_add_resources(QML_RESOURCES qml/qml.qrc)

# Lier les bibliothèques Qt5
target_link_libraries(TestApp PRIVATE
    Qt5::Quick
    Qt5::Gui
    Qt5::Qml
)

# Activer les tests
enable_testing()

# Ajouter les tests
add_subdirectory(tests/cpp-tests)
add_subdirectory(tests/qt-tests)
add_subdirectory(tests/qml-tests)

# Installer l'exécutable
install(TARGETS TestApp
    RUNTIME DESTINATION bin
)
