
/*
  Write a C++ program that displays the 2 rightmost digits of your student ID in reverse order. For
  example, if your student id is 23221454, you need to print 4, and then 5.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string student_id;

public:
  Student(string x) {
    student_id = x;
  }

  void printLastTwoDigitsReversed() {
    int len = student_id.length();

    if (len >= 2) {
      cout << "Last two digits in reverse: ";
      cout << student_id[len - 1] << ", " << student_id[len - 2] << endl;
    } else {
      cout << "Student ID must have at least 2 digits." << endl;
    }
  }
};

int main() {
  string id;
  cout << "Enter your student ID: ";
  cin >> id;

  Student s1(id);
  s1.printLastTwoDigitsReversed();

  return 0;
}