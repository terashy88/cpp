#include <iostream>

int main() {
  // Declare constant to not allow a value of a variable to change
  const double pi = 3.14;

  // pi = 4;  // Error: cannot modify a const variable
  std::cout << pi << std::endl;
  return 0;
}
