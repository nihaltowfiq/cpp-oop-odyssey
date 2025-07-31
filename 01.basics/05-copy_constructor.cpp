/*
  Special constructor to copy values from another object.
  Default copy constructor (shallow copy)
*/

#include <iostream>
using namespace std;

class Person {
  string name;
  int age;

public:
  Person(string n, int a) {
    name = n;
    age = a;
  }

  // Copy Constructor
  Person(const Person &p) {
    name = p.name;
    age = p.age;

    cout << "Copy Constructor Called" << endl;
  }

  void show() { cout << "Name: " << name << ", Age: " << age << endl; }
};

int main() {
  Person p1("Nihal", 22);
  Person p2 = p1; // Copy constructor called

  p1.show();
  p2.show();

  return 0;
}