
/*
  Write a C++ program declaring two integer variables and initializing them. Your task is to swap
  the values of these two variables. You must complete it using two different approaches.
  ● By Creating a third variable.
  ● Without creating any other variables.
*/

#include <iostream>
using namespace std;

class Swapper {
private:
  int a, b;

public:
  Swapper(int x, int y) {
    a = x;
    b = y;
  }

  void displayValues(string label) {
    cout << label << ": a = " << a << ", b = " << b << endl;
  }

  void swapWithTemp() {
    int temp = a;
    a = b;
    b = temp;
  }

  void swapWithoutTemp() {
    a = a + b;
    b = a - b;
    a = a - b;
  }
};

int main() {
  Swapper swap1(10, 20);

  swap1.displayValues("Before swap with temp");
  swap1.swapWithTemp();
  swap1.displayValues("After swap with temp");

  Swapper swap2(23, 59);

  swap2.displayValues("Before swap without temp");
  swap2.swapWithoutTemp();
  swap2.displayValues("After swap without temp");

  return 0;
}