#include <chrono>
#include <iostream>
#include <thread> // for delay option

using namespace std;

int main() {
  // Do-While-Schleife
  // Fuss gesteuerte Schleife
  int i = 0;
  int a;

  cout << "how much does you want to count?.." << endl;
  cin >> a;

  cout << "Counting.. " << a << endl;
  do {
    cout << i << std::endl;
    i++;
    this_thread::sleep_for(chrono::milliseconds(66));
  } while (i <= a);

  cout << "done" << endl;

  return 0;
}
