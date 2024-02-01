#include "header.h"
#include <iostream>

/* Richard Derico */

class Book {

  // private: // constructor not allowed in main()
public: // allowed constructor in main()
  string title;
  string author;
  int pages;

  Book(string aTitle, string aAuthor, int aPages) {
    title = aTitle; // Attribut
    author = aAuthor;
    pages = aPages;
  }

  //   Book() {
  //     title = "Thorwind"; // Attribut
  //     author = "King Richard";
  //     pages = 500;
  //   }
};

int main() {

  // Blueprint for a new Datatype
  Book book1("Thorwind2", "King Richard", 600);
  //   Book();
  //   Book book1;
  //   book1.title = "Thorwind2";
  //   book1.author = "King Richard";
  //   book1.pages = 600;
  //   Book book2;

  cout << book1.title << endl;

  return 0;
}
