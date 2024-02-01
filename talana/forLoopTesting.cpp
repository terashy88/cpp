#include "header.h"
#include <iostream>

/* Richard Derico */

int main() {

  int a = 0;
  int z = 1;
  int y = 3;
  int n = 10;

  for (int i = 0; i < n; i++) {
    a = z * i;
    std::cout << a << endl;
  }

  return 0;
}
