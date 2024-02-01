#include "header.h"
#include <iostream>

/* Richard Derico */

void gender() {

  bool male = true, female = false;

  if (male) {
    std::cout << "You are a Male" << endl;
  }
  if (female) {
    std::cout << "You are a Female" << endl;
  }
}

int main() {

  // bool gender = (male or female);

  gender();

  return 0;
}
