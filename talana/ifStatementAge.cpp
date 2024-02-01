#include <iostream>

using namespace std;

int main() {
  int a;

  cout << "hi, how old are you?" << endl;
  cin >> a;

  if (a < 4 && a > 0) {
    cout << a << " so you most be a baby.." << endl;
    return 0;
  }
  if (a < 13 && a >= 4) {
    cout << a << " so you most be a kid.." << endl;
    return 0;
  }
  if (a < 18 && a >= 13) {
    cout << a << " so you most be a teenager.." << endl;
    return 0;
  }
  if (a >= 18 && a < 111) {
    cout << a << " so you most be a adult.." << endl;
    return 0;
  }
  cout << " Yes, I guess " << a << " that is not right.." << endl;
  return 0;
}
