
#include <iostream>

using namespace std;

int main() {
  // Comparison operator
  int a, b;

  cout << "hi, give me a number for a:.." << endl;
  cin >> a;
  cout << "now give me a number for b:.." << endl;
  cin >> b;

  cout << "your numbers was " << a << " and " << b << " so.. " << endl;

  if (a < b) {
    cout << a << " a is smaller then " << b << " b" << endl;
  }
  if (a > b) {
    cout << a << " a is bigger then " << b << " b" << endl;
  }

  if (a <= b) {
    cout << a << " a is smaller are Equal to " << b << " b" << endl;
  }
  if (a >= b) {
    cout << a << " a is bigger are Equal to " << b << " b" << endl;
  }
  if (a == b) {
    cout << a << " a and " << b << " b  are Equal" << endl;
  }
  if (a != b) {
    cout << a << " a and " << b << " b are not Equal" << endl;
  }
  return 0;
}
