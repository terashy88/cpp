#include <iostream>

using namespace std;

int main() {
  // random number
  srandom(time(0));
  int number = rand() % 33; // % adjust the limit

  cout << number << endl;
  return 0;
}
