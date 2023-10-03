#include <iostream>
using namespace std;

int main() {
  // switchStatement
  int i;
  cout << "choose a number between 1 to 3.." << endl;
  cin >> i;

  switch (i) {
  case 1:
    cout << "x is 1" << endl;
    break;
  case 2:
    cout << "x is 2" << endl;
    break;
  case 3:
    cout << "x is 3" << endl;
    break;

  default:
    cout << "you did not press anything from 1 to 3.." << endl;

    return 0;
  }
}
