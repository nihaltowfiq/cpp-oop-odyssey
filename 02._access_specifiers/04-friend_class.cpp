/*
  Friend Class
  - One class can access private members of another class if declared as a `friend class`.
*/

#include <iostream>
using namespace std;

class Engine {
private:
  int power;

public:
  Engine() {
    power = 100;
  }

  // Declare friend class
  friend class Car;
};

class Car {
public:
  void showEnginePower(Engine &);
};

void Car::showEnginePower(Engine &e) {
  cout << "Engine Power: " << e.power << " HP" << endl;
}

int main() {
  Engine e;
  Car c;
  c.showEnginePower(e);

  return 0;
}
