#include "header.h"
#include <iostream>

/* Richard Derico */

void weekday() {

  char i;
  string weekNum;

  std::cout << "What is the day Today?" << endl;
  std::cout << "Press 1 for Monday, ";
  std::cout << "2 for Tuesday, ";
  std::cout << "3 for Wednesday, ";
  std::cout << "4 for Thursday, ";
  std::cout << "5 for Friday, ";
  std::cout << "6 for Saturday, ";
  std::cout << "7 for Sunday" << endl;
  std::cout << "And if you want to Quit-out Press 'e'" << endl;

  cin >> i;

  switch (i) {
  case '1':
    weekNum = "Monday";
    break;
  case '2':
    weekNum = "Tuesday";
    break;
  case '3':
    weekNum = "Wednesday";
    break;
  case '4':
    weekNum = "Thursday";
    break;
  case '5':
    weekNum = "Friday";
    break;
  case '6':
    weekNum = "Saturday";
    break;
  case '7':
    weekNum = "Sunday";
    break;
  case 'e':
    std::cout << "exit" << endl;
    break;
  default:
    cout << "there is no Weekday input..\n";
  }

  if (i != false && i != 'e')
    cout << "The Weekday is " << weekNum << "!" << endl;
}

int main() {

  weekday();

  return 0;
}
