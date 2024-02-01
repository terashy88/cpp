#include <chrono>
#include <iostream>
#include <thread> // for delay option

using namespace std;

int main() {
  // Do-While-Schleife
  // Fuss gesteuerte Schleife
  int i = 0;
  int a;

  cout << "how much you want to count?.." << endl;
  cin >> a;
  std::cout << "counting..\n" << std::endl;
  this_thread::sleep_for(chrono::milliseconds(666));

  do {
    cout << i << std::endl;
    i++;
    this_thread::sleep_for(chrono::milliseconds(66));
  } while (i <= a);

  cout << "\ndone" << endl;

  return 0;
}
