/*
  Multilevel Inheritance:
    - Child inherits parent, parent inherits grandparent.
    - Inheritance occurs in a chain (a class is derived from a derived class)
*/

#include <iostream>
using namespace std;

class LivingBeing {
public:
  void breathe() {
    cout << "Breathing..." << endl;
  }
};

class Animal : public LivingBeing {
public:
  void eat() {
    cout << "Animal eats" << endl;
  }
};

class Dog : public Animal {
public:
  void bark() {
    cout << "Dog barks" << endl;
  }
};

int main() {
  Dog d;
  d.breathe(); // from LivingBeing
  d.eat();     // from Animal
  d.bark();    // from Dog

  return 0;
}
