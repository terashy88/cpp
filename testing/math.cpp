#include <cmath> // allow math functions
#include <iostream>

using namespace std;

int main() {
  double a = 6, b = 2, y = 0;
  double sum = 0;
  double plus = 0;
  double minus = 0;
  double divide = 0;
  double multiple = 0;

  plus = a + b;
  cout << "Plus is:    " << plus << endl;

  minus = a - b;
  cout << "Minus is:   " << minus << endl;

  y = pow(10, 2) * 2;
  cout << "pow is:     " << y << endl;
  // cout << pow(2, 2);
  // cout << sqrt(33);
  // cout << round(3.3);
  // cout << ceil(3.3);
  // cout << floor(3.3);
  // cout << fmax(3.4);
  // cout << fmin(3.4);   // there is more online

  divide = a / b;
  cout << "divide is   " << divide << endl;

  multiple = a * b;
  cout << "Multiple is " << multiple << endl;

  int c = 9, d = 7;
  int modulus = c % d;
  cout << "modulus: " << modulus << endl;

  int t = 5, u = 10;
  sum = t ^ u; // parity check operator
  cout << sum << endl;

  // increment
  // a = a++;
  // a = ++b;
  // a = a + 11;
  // cout << a << endl;
  // cout << b << endl;

  // multification first:
  // double x 1+2*3;
  // cout << x;

  // cout << a + b << endl;
  // cout << a - b << endl;
  // cout << a / b << endl;
  // cout << a * b << endl;
  // cout << a ^b<< endl;

  // cin.get();

  // cout << a += b << endl;
  // cout << a -= b << endl;
  // cout << a *= b << endl;
  // cout << a /= b << endl;
  return 0;
}
