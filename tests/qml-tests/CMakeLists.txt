find_package(Qt5 REQUIRED COMPONENTS Test QuickTest Qml Quick)

add_executable(QmlTests
    main.cpp
    setup.cpp
    setup.h
)

set_target_properties(QmlTests PROPERTIES AUTOMOC ON)

target_link_libraries(QmlTests PRIVATE
    Qt5::Test
    Qt5::QuickTest
    Qt5::Qml
    Qt5::Quick
)

add_test(NAME QmlTests COMMAND QmlTests)
