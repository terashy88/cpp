#include "header.h"
#include <iostream>

/* Richard Derico */
// "&" Zeigt wo im RAM das wert abgespeichert ist

int main() {
  int i = 5;
  int *a = &i;

  std::cout << &i << endl;
  std::cout << a << endl;
  std::cout << *a << endl;
  std::cout << &a << endl;
}
