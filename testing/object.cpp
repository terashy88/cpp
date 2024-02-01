#include "header.h"
#include <iostream>

/* Richard Derico */
class Book { // blueprint
public:
  string title, author;
  int pages;

  Book(string aTitle, string aAuthor, int aPages) { // obekt
    title = aTitle;
    author = aAuthor;
    pages = aPages;
  }
  // Book (string aTitle, string aAuthor, int aPages) : title(aTitle),
  // author(aAuthor), pages(a Book (string aTitle, string aAuthor) :
  // title(aTitle), author(aAuthor
  //   Book() { std::cout << "Creating Object" << endl; }
};

int main() {
  Book book1("Star Wars", "Richard", 666);
  //   Book book1;
  //   book1.title = "Star Wars";
  //   book1.author = "Richard";
  //   book1.pages = 500;

  Book book2("Master of Live", "Claire", 777);

  //   std::cout << book1.author << endl;

  return 0;
}
