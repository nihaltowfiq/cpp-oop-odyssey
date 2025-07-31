/*
  Multiple Inheritance:
    - One class inherits from two or more base classes
*/
#include <iostream>
using namespace std;

class Engine {
public:
  void engineInfo() {
    cout << "Engine capacity: 2000cc" << endl;
  }
};

class Wheels {
public:
  void wheelInfo() {
    cout << "Wheels: 4" << endl;
  }
};

class Car : public Engine, public Wheels {
public:
  void carInfo() {
    cout << "This is a Car" << endl;
  }
};

int main() {
  Car c;
  c.engineInfo();
  c.wheelInfo();
  c.carInfo();

  return 0;
}
