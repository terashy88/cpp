
#include <algorithm>
#include <cmath>   // allow math functions
#include <cstdlib> // allow random number generation
#include <ctime>   // allow random number generation
#include <fstream>
#include <iomanip>  // allow scientific notation
#include <iostream> // allow input output
#include <sstream>
#include <string> // allow siquenz from of carater from the user.
#include <vector>
using namespace std; // allow me to exclude "std::cout "

/*
Richard cpp
*/

int main() {
  printf("print input\n");

  cout << "text without std:: and std::endl because of 'using namespace std;\n";
  std::cout << "hi with neu line \n";
  std::cout << "hello with std endl also for new line " << std::endl;
  std::cout << "GCC number is: " << __cplusplus << std::endl;

  std::cout << "What is your name? \n";
  string name; // store name
  // cin >> name;                            //  waiting for input and store
  // that in to variable "name"
  cout << "Your name is " + name << "\n"; // output

  cout << "Do you want to go out? (y/n) \n";
  string i;
  // cin >> i;
  if (i == "y" || i == "Y")
  // if (i[0] == "y){
  {
    cout << "Yes really? let's go" << endl;
  } else {
    cout << "Well then no" << endl;
  }

  cout << "what is the ASCII number of your keyboard input?" << endl;
  int key;
  // key = getchar();
  cout << "The ASCII number is: " << key << endl;

  // system("zsh"); // would execute my zsh
  // system("pause"); // is to keep the terminal open
  return 0;
}
//
