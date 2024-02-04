#include "header.h"
#include <iostream>

using namespace std;

/*
BS 16Bit int: -32768 bis +32767
oder 32Bit -2147483648 bis
+2147483647 möglich.
Es sind immer ganze Zahlen ohne
Dezimalstellen.
*/
int main() {

  cout << "the size of the dataTypes are:.." << endl;

  cout << "bool = " << sizeof(bool) << endl;
  cout << "char = " << sizeof(char) << endl;
  cout << "short int = " << sizeof(short int) << endl;
  cout << "short = " << sizeof(short) << endl;
  cout << "long int = " << sizeof(long int) << endl;
  cout << "int = " << sizeof(int) << endl;
  cout << "float = " << sizeof(float) << endl;
  cout << "double = " << sizeof(double) << endl;
  cout << "long double = " << sizeof(long double) << endl;
  cout << "--------------------------" << endl << endl;

  // Integer data types / Ganz zahlen
  int a = 10;
  short b = 20;
  long c = 30;
  long long d = 40;

  cout << "Integer data types: " << endl;
  cout << "int: " << a << endl;
  cout << "short: " << b << endl;
  cout << "long: " << c << endl;
  cout << "long long: " << d << endl;

  // Floating-point data types numbers
  float e = 3.14f;     // 6-7 digits
  double f = 3.141592; // 15 -16  digits
  long double g = 3.14159265358979L;
  cout << "Floating-point data types: " << endl;
  cout << "float: " << e << endl;
  cout << "double: " << f << endl;
  cout << "long double: " << g << endl;

  // Character data types
  char h = 'a';
  wchar_t i = L'b';
  char16_t j = u'c';
  char32_t k = U'd';
  cout << "Character data types: " << endl;
  cout << "char: " << h << endl;
  wcout << "wchar_t: " << i << endl;
  cout << "char16_t: " << j << endl;
  cout << "char32_t: " << k << endl;

  // Boolean data type
  bool l = true;
  bool m = false;
  cout << "Boolean data type: " << endl;
  cout << "true: " << l << endl;
  cout << "false: " << m << endl;

  // String data type
  string n = "Hello, world!";
  cout << "String data type: " << endl;
  cout << n << endl;

  char charSingle = 'CC';     // only takes on character note: '' not ""
  char charArray[] = "Essen"; // an array of more character,but use string..

  cout << "Char single: " << charSingle << "\nArray of Char's: " << charArray
       << endl;

  //   int a = 1, b = 2;
  //   a += 4; // a ist
  // a += b * 4; // a ist
  // a /= 2;     // a ist
  // a %= 2;     // a ist
  //
  std::cout << a << endl;

  return 0;
}
