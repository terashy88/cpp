#include "header.h"
#include <iostream>
#include <thread> // for delay option

using namespace std;

int main() {
  // modified switchCase..
  char i;
  char bb; // bye bye

  cout << "Hi, what you wanna do today?.." << endl;
  this_thread::sleep_for(chrono::seconds(3));

  do {
    std::cout << "If you wanna Go out for a drink Press 1.." << std::endl;
    this_thread::sleep_for(chrono::seconds(2));

    std::cout << "If we  wanna Go To dance        Press 2.." << std::endl;
    this_thread::sleep_for(chrono::seconds(2));

    std::cout << "If we  wanna stay  Home         Press 3.." << std::endl;

    cin >> i;

    switch (i) {
    case '1':
      cout << "alright, lets geht out and get some drink.. " << endl;
      i = 'q';
      break;
    case '2':
      cout << "alright, lets go dance out!" << endl;
      i = 'q';
      break;
    case '3':
      cout << "Nice, lets stay Home and have some Pizza!" << endl;
      i = 'q';
      break;
    default:
      cout << "you did not press anything from 1 to 3.." << endl;

      std::cout << "should I ask you again are do you wanna Quit out? "
                << std::endl;
      std::cout << "To Quit out Press Q.." << std::endl;
      std::cin >> i;
      bb = i;
    }
  } while (i != 'q' && i != 'Q');

  if (bb == i) {
    std::cout << "okey See ya.." << std::endl;
  }
  return i;
}
