
#include <chrono>
#include <iostream> // allow input output
#include <thread>   // for delay option

using namespace std;

int main() {
  // Kopf gesteuerte Schleifen
  int a;

  cout << "Set the time for the Countdown..?" << endl;
  cin >> a;

  std::cout << "counting-down..\n" << std::endl;
  this_thread::sleep_for(chrono::milliseconds(666));

  for (int i = 0; i < a; a--) {
    cout << a << endl;
    this_thread::sleep_for(chrono::seconds(1));
  }

  std::cout << "..done.." << std::endl;

  return 0;
}
