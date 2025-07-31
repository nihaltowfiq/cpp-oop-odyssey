#include <iostream>
using namespace std;

class Sample {
  int *data;

public:
  Sample(int val) {
    data = new int;
    *data = val;
  }

  // Deep Copy Constructor
  Sample(const Sample &s) {
    data = new int;
    *data = *(s.data);
    cout << "Deep Copy Constructor Called" << endl;
  }

  void set(int val) {
    *data = val;
  }

  void display() {
    cout << "Value: " << *data << endl;
  }

  ~Sample() {
    delete data;
  }
};

int main() {
  Sample s1(10);
  Sample s2 = s1;

  s1.set(20);

  s1.display(); // 20
  s2.display(); // 10 — because it's a deep copy

  return 0;
}
