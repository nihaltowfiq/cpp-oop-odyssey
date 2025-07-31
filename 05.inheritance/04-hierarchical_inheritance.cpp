/*
  Hierarchical Inheritance:
    - Multiple classes inherit from a single base class
*/

#include <iostream>
using namespace std;

class Person {
public:
  void showIdentity() {
    cout << "I am a person." << endl;
  }
};

class Student : public Person {
public:
  void study() {
    cout << "I am studying." << endl;
  }
};

class Teacher : public Person {
public:
  void teach() {
    cout << "I am teaching." << endl;
  }
};

class Engineer : public Person {
public:
  void develop() {
    cout << "I am developing software." << endl;
  }
};

int main() {
  Student s;
  Teacher t;
  Engineer e;

  s.showIdentity();
  s.study();

  t.showIdentity();
  t.teach();

  e.showIdentity();
  e.develop();

  return 0;
}
