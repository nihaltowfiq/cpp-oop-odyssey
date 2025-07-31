/*
  Friend Function
  - Can access private members of a class.
  - Not a member, but declared using `friend`.
*/

#include <iostream>
using namespace std;

class Box {
private:
  int length;

public:
  Box() {
    length = 0;
  }

  // Friend Function
  friend void setLength(Box &, int);
};

void setLength(Box &b, int len) {
  b.length = len;
  cout << "Length: " << b.length << endl;
}

class BankAccount {
private:
  string accountHolder;
  double balance;

public:
  BankAccount(string name, double bal) {
    accountHolder = name;
    balance = bal;
  }
  void getBalance() {
    cout << "Balance: " << balance << endl;
  }
  friend void TransferMoney(BankAccount &from, BankAccount &to, double amount); // friend fn declaration.
};

void TransferMoney(BankAccount &from, BankAccount &to, double amount) { // friend fn defenation.
  if (from.balance >= amount) {
    from.balance -= amount;
    to.balance += amount;
    cout << "Transaction Successful!" << endl
         << amount << "Tk " << "Transfer From " << from.accountHolder << " to " << to.accountHolder << endl;
  } else {
    cout << "Insufficient funds for transfer!" << endl;
  }
}

int main() {
  BankAccount from("Shuvo", 10000);
  BankAccount to("Anika Afrin", 4000);
  TransferMoney(from, to, 6000);

  from.getBalance();

  return 0;
}
