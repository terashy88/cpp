#include <iostream>

// Conversation

int main() {
  std::string name;
  std::string location;
  int age;

  std::cout << "Hi, what is your name?\n";
  std::getline(std::cin, name);

  std::cout << "And where are you from, " << name << "?\n";
  std::getline(std::cin, location);
  std::cout << "So you are from " << location << ", ah.\n";

  std::cout << "..how old are you, " << name << "?\n";
  std::cin >> age;
  while (age > 110 || age <= 0) {
    std::cout << "Ya I guess your are not " << age << std::endl;
    std::cout << "..try again " << name << "!..\n";
    std::cin >> age;
  }

  age += 3;
  // age = age + 3;

  std::cout << "Ya, that's pretty nice. I'm " << age
            << ", but sadly I'm not in your area. Maybe we can meet sometime "
               "in the future...\n";

  return 0;
}
