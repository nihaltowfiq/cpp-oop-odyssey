/*
  Getter and Setter
    -Used to control access to private variables.
    -Good practice for encapsulation.
*/

#include <iostream>
using namespace std;

class Student {
private:
  int id;

public:
  void setID(int i) {
    if (i > 0) id = i;
  }

  int getID() {
    return id;
  }
};

int main() {
  Student s1;
  s1.setID(100);
  cout << "ID: " << s1.getID() << endl;

  return 0;
}
