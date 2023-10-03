
#include <iostream> // allow input output
#include <string>

using namespace std;

int main() {
  // todo
  int pw = 12;
  int input;

  cout << "Guess the Password are, else.." << endl;
  cin >> input;

  if (input != pw)

    for (int i = 3; i > 0; i--) {

      cout << "well " << input << " is not correct.." << endl;
      cout << "you wanna try again? \n You have " << i << " try.." << endl;
      cin >> input;
    }
  else {
    cout << "Welcome! you may past.." << endl;
    return 0;
  }
  if (input != pw) {
    cout << "well " << input << " is not correct, you are not allow!..";
    return 1;
  }
}
