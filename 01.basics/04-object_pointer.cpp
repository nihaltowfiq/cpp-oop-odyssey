#include <iostream>
using namespace std;

class Book {
public:
  string title;
  void show() {
    cout << "Book: " << title << endl;
  }
};

int main() {
  Book b1;
  b1.title = "C++ Fundamentals";

  Book b2;
  b2.title = "C Programming Language";

  Book *ptr = &b1;
  ptr->show();

  Book *ptr2 = &b2;
  ptr2->title = "Structured Programming Language";
  ptr2->show();

  return 0;
}