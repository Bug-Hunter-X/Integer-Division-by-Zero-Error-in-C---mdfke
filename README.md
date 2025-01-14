# Integer Division by Zero Bug in C++

This repository demonstrates a common error in C++: integer division by zero. The `bug.cpp` file contains the erroneous code, which attempts to divide by zero.  The `bugSolution.cpp` file provides a corrected version that handles potential division by zero.

## How to Reproduce

1. Compile `bug.cpp` using a C++ compiler (like g++).
2. Run the resulting executable.  You'll likely see a crash or an error message indicating a division by zero.

## Solution

The solution involves checking the divisor to ensure it's not zero before performing the division.  The corrected code is shown in `bugSolution.cpp`.