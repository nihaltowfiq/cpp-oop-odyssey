/*
  Constructors in C++
  - Special function called when object is created.
  - Same name as class.
  - No return type.
  - Can be overloaded.

  Types:
    - Default Constructor
    - Parameterized Constructor
    - Copy Constructor
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

  void display() { cout << "Name: " << name << ", Age: " << age << endl; }
};

int main() {
  Person p1("Nihal", 12);

  p1.display();

  return 0;
}