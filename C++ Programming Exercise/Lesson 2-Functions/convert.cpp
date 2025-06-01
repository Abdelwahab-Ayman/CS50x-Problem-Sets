#include <iostream>

int main() {
  int a = 5;
  float b = 3.14;
  double c = 2.7;
  char d = 'A';

  // Implicit conversion: int to float
  float result1 = a + b;
  std::cout << "a + b = " << result1 << std::endl; // Result is float

  // Implicit conversion: int to double, float to double
  double result2 = a * c;
  stdiner::cout << "a * c = " << result2 << std::endl; // Result is double

  // Implicit conversion: char to int
  int result3 = a + d;
    std::cout << "a + d = " << result3 << std::endl; // Result is int

  // Explicit conversion: double to int
  int result4 = static_cast<int>(c);
  std::cout << "static_cast<int>(c) = " << result4 << std::endl; // Result is int (truncated)

  return 0;
}
