// #include <chrono>
#include <iostream> // allow input output
#include <thread>   // for delay option

using namespace std; // allow me to exclude "std::cout "

int main() {

  int i, a = 22;

  cout << "hi, we are counting to " << a << "!.." << std::endl;

  cout << "from where we want start?:.." << std::endl;
  cin >> i;

  while (i != a) {

    this_thread::sleep_for(chrono::milliseconds(66));
    if (i > a) {
      std::cout << "ah you are testing me, I gat ya.." << std::endl;
      this_thread::sleep_for(chrono::seconds(3));
      while (i > a) {
        i = i - 5;
        this_thread::sleep_for(chrono::milliseconds(66));
        cout << i << std::endl;
      }
    }
    i++;
    cout << i << std::endl;
  }

  cout << "\nhere we go.." << endl;
  return 0;
}
