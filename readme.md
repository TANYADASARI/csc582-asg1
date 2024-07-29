
# CSC582 Assignment #1 Submission

**Student Name:** Tanya Dasari  
**Student ID:** 211890369  
**Email:** tdasari1@toromail.csudh.edu

## GitHub Repository Link
[https://github.com/TANYADASARI/csc582-asg1](https://github.com/TANYADASARI/csc582-asg1)

## Compilation Instructions
Navigate to the project directory:

cd ~/desktop/csc582-asg1

Clean any previous builds and create a new build directory:

rm -rf build
mkdir build
cd build
Run CMake to configure the project:

cmake ..
Build the project:

make
Execution Instructions

After building the project, execute the main program:

./FourBitAdder
Running Tests

To run the unit tests, use the following command:

./FourBitAdder

Doxygen Documentation

Generate the Doxygen documentation (if not already done):


doxygen Doxyfile

The documentation will be generated in the docs directory. Open docs/html/index.html to view the documentation.
Additional Notes

Ensure that all dependencies (such as Google Test and CMake) are installed and properly configured. The project follows Hungarian notation for variable names. The code has been formatted using astyle. Comprehensive truth-table unit tests have been implemented using Google Test.

Commit History

Initial commit: Added initial files and structure
Implemented AND gate logic
Implemented OR gate logic
Implemented NAND gate logic
Implemented NOT gate logic
Implemented Half Adder logic
Implemented Full Adder logic
Implemented Four Bit Adder logic
Added Google Test for all gates and adders
Generated Doxygen documentation
Added one more commit for completeness
