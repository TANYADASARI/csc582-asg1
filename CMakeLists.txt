cmake_minimum_required(VERSION 3.10)
project(FourBitAdder)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add executable
add_executable(FourBitAdder
    src/ANDGate.cpp
    src/ORGate.cpp
    src/NANDGate.cpp
    src/NOTGate.cpp
    src/HalfAdder.cpp
    src/FullAdder.cpp
    src/FourBitAdder.cpp
    tests/ANDGateTest.cpp
    tests/ORGateTest.cpp
    tests/NANDGateTest.cpp
    tests/NOTGateTest.cpp
    tests/HalfAdderTest.cpp
    tests/FullAdderTest.cpp
    tests/FourBitAdderTest.cpp
)

# GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries(FourBitAdder ${GTEST_LIBRARIES} pthread)

# Enable testing
enable_testing()
add_test(NAME FourBitAdderTest COMMAND FourBitAdder)
