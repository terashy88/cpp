#include <iostream>
using namespace std;

void hi(string name, int age) {
  cout << "hi " << name << " I guess you are " << age << " old" << endl;
  // return 0; //! would end the code here
}

void IdontCare() { cout << "This is a I don't Care function" << endl; }

int main() {
  cout << "hello world" << endl;
  hi("Sophie", 26); // void function can be call like this
  IdontCare();
  return 0;
}
