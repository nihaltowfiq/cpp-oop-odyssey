/*
  Access Specifiers
  1.Public
    -Accessible everywhere.
  2.Private
    -Accessible only inside the class.
  3.Protected
    -Accessible in the class and derived (child) classes.
*/

#include <iostream>
using namespace std;

class Account {
public:
  string name;

private:
  int balance;

protected:
  string bankName;

public:
  void setBalance(int b) {
    balance = b;
  }

  void showDetails() {
    cout << "Name: " << name << ", Balance: " << balance << endl;
  }
};

class Savings : public Account {
public:
  void showBank() {
    bankName = "Brac Bank";
    cout << "Bank: " << bankName << endl;
  }
};

int main() {
  Savings s1;

  s1.name = "Nihal";
  s1.setBalance(10000);
  // s1.bankName [can not be accessble from outside of derived/child class as it is protected]
  s1.showDetails();
  s1.showBank();

  return 0;
}