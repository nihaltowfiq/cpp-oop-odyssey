/*
  Destructors in C++
  - Cleans up when object is destroyed.
  - Name starts with `~`.
  - Called automatically.
*/

#include <iostream>
using namespace std;

class Student {
public:
  Student() {
    cout << "Constructor Called" << endl;
  }

  ~Student() {
    cout << "Destructor Called" << endl;
  }
};

int main() {
  Student s1;
  {
    Student s2;
  } // s2 goes out of scope, destructor called here

  return 0;
}