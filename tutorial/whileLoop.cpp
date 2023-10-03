// #include <chrono>
#include <iostream> // allow input output
#include <thread>   // for delay option

using namespace std; // allow me to exclude "std::cout "

int main() {

  int i, a = 22;

  cout << "hi, we are counting to " << a << "!.." << std::endl;

  cout << "from where we want start?:.." << std::endl;
  cin >> i;

  while (i < a) {
    cout << i << std::endl;

    this_thread::sleep_for(chrono::milliseconds(66));

    i++;
  }

  if (i > a) {
    cout << "you are not in the range.." << endl;
    return 1;
  } else {
    cout << "here we go.." << endl;
    return 0;
  }
}
