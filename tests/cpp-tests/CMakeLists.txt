find_package(Qt5 REQUIRED COMPONENTS Test)

add_executable(CppTest
    tst_cpptest.cpp
)

set_target_properties(CppTest PROPERTIES AUTOMOC ON)

target_link_libraries(CppTest PRIVATE Qt5::Test)

add_test(NAME CppTest COMMAND CppTest)
