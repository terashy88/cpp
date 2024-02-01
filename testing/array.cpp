#include <iostream>

using namespace std;

int number = 0;

int main() {

  string names[] = {"susi", "lana", "mary", "claire", "sophie"};
  int number[] = {4, 6, 1, 8}; // Qual "=" is optional.. also in strings..

  cout << names[3] << " " << number[1] << endl;

  //--------------------------------------------------------------------

  cout << "And here is another array way.." << endl;
  string names2[5];
  names2[0] = "jesi";
  names2[1] = "meli";
  names2[2] = "rosi";
  names2[3] = "shary";
  names2[4] = "lori";

  int number2[5];

  number2[0] = 2;
  number2[1] = 4;
  number2[2] = 6;
  number2[3] = 8;

  cout << names2[2] << " " << names2[3] << " " << number2[2] << endl;

  // todo
  std::cout << "\nWhat is your number?.." << std::endl;
  // cin >> number2[4]; // user input

  std::cout << "Your number is " << number2[4] << std::endl;

  return 0;
}
