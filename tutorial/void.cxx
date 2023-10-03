#include <iostream>
using namespace std;

void hi() {
  cout << "hey" << endl;
  // return 0; //! not working in "void"
}

void IdontCare() { cout << "This is a I don't Care function" << endl; }
int main() {
  cout << "hello world" << endl;
  hi(); // void function can be call like this
  IdontCare();
  return 0;
}
