#include <iostream>

using namespace std;

int main() {
  // swapping from a to b
  int a = 1, b = 5;

  cout << a << " and " << b << " swapping the value of a and b" << endl;

  int swap = a;
  a = b;
  b = swap;
  cout << "so now a is: " << a << " and b is: " << b << endl;

  return 0;
}
