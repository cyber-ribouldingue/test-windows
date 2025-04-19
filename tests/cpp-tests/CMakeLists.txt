# CMakeLists.txt dans tests/cpp-tests/

add_executable(CppTest
    tst_cpptest.cpp
)

find_package(Qt5 REQUIRED COMPONENTS Test)

target_link_libraries(CppTest PRIVATE Qt5::Test)

add_test(NAME CppTest COMMAND CppTest)
