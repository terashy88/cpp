
#include <chrono>
#include <iostream> // allow input output
#include <thread>   // for delay option

using namespace std;

int main() {
  // Kopf gesteuerte Schleifen
  int a;

  cout << "how much does you want me to count?" << endl;

  cin >> a;

  std::cout << "counting..\n" << std::endl;
  this_thread::sleep_for(chrono::milliseconds(666));

  for (int i = 0; i <= a; i++) {

    cout << i << endl;
    this_thread::sleep_for(chrono::milliseconds(66));
  }

  return 0;
}
