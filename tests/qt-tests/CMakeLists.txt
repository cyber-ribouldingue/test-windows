find_package(Qt5 REQUIRED COMPONENTS Test QuickTest Qml Quick)

add_executable(QtTests
    tst_test1.cpp
)

set_target_properties(QtTests PROPERTIES AUTOMOC ON)

target_link_libraries(QtTests PRIVATE
    Qt5::Test
    Qt5::QuickTest
    Qt5::Qml
    Qt5::Quick
)

add_test(NAME QtTests COMMAND QtTests)
