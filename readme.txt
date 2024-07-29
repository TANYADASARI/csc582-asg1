csc582-asg1/
├── CMakeLists.txt
├── include/
│ ├── ANDGate.h
│ ├── ORGate.h
│ ├── NANDGate.h
│ ├── NOTGate.h
│ ├── HalfAdder.h
│ ├── FullAdder.h
│ └── FourBitAdder.h
├── src/
│ ├── ANDGate.cpp
│ ├── ORGate.cpp
│ ├── NANDGate.cpp
│ ├── NOTGate.cpp
│ ├── HalfAdder.cpp
│ ├── FullAdder.cpp
│ └── FourBitAdder.cpp
├── tests/
│ └── FourBitAdderTest.cpp
└── Doxyfile


## Prerequisites

Ensure you have the following tools installed:

- CMake (version 3.10 or higher)
- Google Test
- A C++ compiler (such as g++, clang++, etc.)

## Setup Instructions

### 1. Navigate to the Project Root and Clean the Build Directory


cd ~/desktop/csc582-asg1   # Navigate to your project root directory
rm -rf build               # Remove any existing build directory
mkdir build                # Create a new build directory
cd build                   # Navigate into the build directory

cmake ..
make

#Run the Tests
./FourBitAdder