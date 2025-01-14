#include <iostream>

int main() {
  int x = 5;
  int y = 0;

  if (y != 0) {
    int z = x / y;
    std::cout << "Result: " << z << std::endl;
  } else {
    std::cerr << "Error: Division by zero!" << std::endl;
    return 1; // Indicate an error
  }

  return 0;
} 