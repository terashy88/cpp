
#include <chrono>
#include <iostream> // allow input output
#include <thread>   // for delay option

using namespace std;

int main() {
  // Kopf gesteuerte Schleifen
  // forLoop is same as whileLoop but the statement is a inline.
  int a = 44;
  int n = 3;

  for (int i{-44}; i <= a; i += n) {
    // for (int i = 0; i <= a; i++) {

    cout << i << endl;
    this_thread::sleep_for(chrono::milliseconds(66));
  }

  return 0;
}
