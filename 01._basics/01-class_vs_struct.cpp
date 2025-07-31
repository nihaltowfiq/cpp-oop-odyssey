/*
  ## Classes vs Structs in C++

  - Both can have data members and member functions.
  - **Class**: Default access specifier is **private**.
  - **Struct**: Default access specifier is **public**.
  - Use class when implementing OOP concepts.

*/

#include <iostream>

using namespace std;

class Car {
public:
  string brand;
  int year;

  void display() {
    cout << "Brand: " << brand << ", Year: " << year << endl;
  }
};

struct Bike {
  string brand;
  int year;

  void display() {
    cout << "Brand: " << brand << ", Year: " << year << endl;
  }
};

int main() {
  Car car1;
  car1.brand = "Audi";
  car1.year = 2020;
  car1.display();

  Bike bike1;
  bike1.brand = "Yamaha";
  bike1.year = 2022;
  bike1.display();

  return 0;
}