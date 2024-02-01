#include "header.h"
#include <iostream>

/* Richard Derico */

int main(int argc, char const *argv[]) {
  int a = 5;
  int b = 4;

  if (a < b) {
    std::cout << "this is a" << std::endl;
  } else {
    std::cout << "this is b" << std::endl;
  }

  std::cout << "------------------" << std::endl;

  auto inlineVersion = (a < b) ? a : b;
  std::cout << inlineVersion << std::endl;
  return 0;
}
