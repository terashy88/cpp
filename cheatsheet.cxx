
#include <algorithm>
#include <cmath>    // allow math functions
#include <cstdlib>  // allow c Library db
#include <ctime>    // allow random number generation
#include <fstream>  // allow to stream textfile in and out
#include <iomanip>  // allow scientific notation
#include <iostream> // allow input output
#include <istream>  // allow iutput //! use iostream..
#include <ostream>  // allow output //! use iostream..
#include <sstream>
#include <stdio.h> // allow c Library db
#include <string>  // allow using string //! using iostream make this usless
#include <vector>
// more infos about "include" search Google z.b "iostream reference"

void notmain(int); // add to use more function then only "main"

using namespace std; // allow me to exclude "std::cout and << std::endl;" std ==
                     // standard Library == namespace

// ***************************************************
// Projekt:
// Copyright:
// Author:
// Datum:
// Programmname:
// ***************************************************
// c++ compile int to Machine-code

/*
Richard cpp
*/

int main() // function header and has to be "main" and it's better to use "int"
// for the return output in number.
{                        // function body are statement body
  double a = 6;          // always initialize variables for not get randoms in a
                         // b=="variables"
  double b = 2;          // asigned to value
  double result = a + b; // expression "a +b"

  // todo
  printf("print %d input\n", result); // use cout

  // cout cin is C input out and in!

  // ofstream myfile;
  // myfile.open("myfile.txt"); //creating newfile
  // myfile << "This is a input of myfile" << endl;
  // myfile.close();

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
  if (i == "y" || i == "Y") // if (i[0] == "y){
  {
    cout << "Yes really? let's go" << endl;
  } else if (!i.empty() && i.front() != 'y') {
    cout << "Well then no" << endl;
  }

  cout << "what is the ASCII number of your keyboard input?" << endl;
  int key;
  // key = getchar();
  cout << "The ASCII number is: " << key << endl;

  // system("zsh"); // would execute any programm like ("zsh") are my
  // fileManager ("nemo") system("pause"); // waiting for user input cin.get();
  // // also waiting for user input

  notmain(11);
  return 0;
}

void notmain(int i) // "void" is for no datatype
{
  cout << i << "\nthis is the 'notmain output'\n";
}

/*

# ControlFlow
branching == if and switch Statement
looping == while, for and do-while looping

input:
cin >> variables >> morevariables;
cin.getline(cin, variables, 11);
cin.get();
getline(cin, name); // to get a line of input in name z.b. first and second name

 c = getchar(); // get only first keypress same as "c = cin.get();"

<< == read data from stream
>> == write data to stream

variables name Technik:
int variablesName;  // camelCase
int variables_name;   // snake_case
int variablesName;  // PascalCase

return -1 and break; in switch statement terminate the session

Logical operator
a && b;  "and" - Operator both are true
a || b;  "or" - Operator at least one is true

Comparision operator
a == b;  "equal" - Operator equal
a <= b;  "less than or equal" - Operator less than or equal
a >= b;  "greater than or equal" - Operator greater than or equal
a != b;  "not equal" - Operator not equal
(!(a == b));  "not equal" - Operator not equal
a += 3; "add 3 to a"
a -= 3; "take 3 off a"
*/
