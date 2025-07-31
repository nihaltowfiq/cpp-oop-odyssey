/*
  Single Inheritance:
    - One child inherits one parent.
*/

#include <iostream>
using namespace std;

class Animal {
public:
  void walk() {
    cout << "Animal walking.. 👣!!" << endl;
  }
};

class Dog : public Animal {
public:
  void bark() {
    cout << "Dog barks!" << endl;
  }
};

class Cat : public Animal {
public:
  void meow() {
    cout << "Cat meow!" << endl;
  }
};

int main() {
  Dog d;
  d.walk(); // inherited from Animal
  d.bark(); // defined in Dog

  Cat c;
  c.walk();
  c.meow();

  return 0;
}
