#include <iostream>

using namespace std;

/* Richard Derico
Inspired by Caleb Curry: https://www.youtube.com/watch?v=_bYFu9mBnr4
*/

void playGame() { // random number
  int guess, tryCount = 0, guesslimit = 3;

  std::cout << "So I Generate a Number between 0 to 100" << std::endl;
  std::cout << "And I will count how much try you have :c)" << std::endl;

  std::cout << "what is my number?.." << endl;

  srandom(time(0));
  int random = rand() % 100; // % adjust the limit
                             //   cout << random << endl;

  //   std::cout << "-= " << guess << " =-" << std::endl;
  while (true)

    std::cin >> guess;

  if (guess == random) {
    std::cout << "Wow Gratulation you did have " << endl;
    // todo << tryCount << "!.."    << std::endl;

  } else if (guess < random) {

    std::cout << "Your number is too low, try again.." << std::endl;
  } else {

    std::cout << "Your number is too high, please try again.." << std::endl;
  }
}

int main(int argc, char const *argv[]) {
  // Guessing Game
  int choice;
  std::cout << "hi, do you like to play a guessing Game with meh?" << std::endl;
  std::cout << "It would be guessing a number between 0 and 100." << std::endl;

  do {
    cout << "       alright Press    0. Quit" << endl;
    std::cout << "           are Press    1. Play Game to so start.."
              << std::endl;

    std::cin >> choice;

    while (choice != 0 && choice != 1) {
      std::cout << "I guess that was not the right number.." << std::endl;
      std::cout << "Do you wanna try again?" << std::endl;
      std::cout << "0. Quit" << std::endl;
      std::cout << "1. Play" << std::endl;
      std::cin >> choice;
    }

    {
      switch (choice) {
      case 0:
        std::cout << "Oh no, see ya.." << std::endl;
        break;
      case 1:
        std::cout << "alright, let's go" << std::endl;
        playGame();
        break;
      default:
        std::cout << "..Bug.." << std::endl;
      }
    };
  } while (choice != 0);
  return 0;
}
