#include <iostream>

using namespace std;

int main() {

  int num[] = {4,  6, 1, 8,
               23, 4, 6}; // Qual "=" is optional.. also in strings..

  cout << num[1] + num[3] << endl;

  for (int i = 0; i <= 6; i++) {

    cout << num[i] << ", ";
  }
  std::cout << endl;

  return 0;
}
