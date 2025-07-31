/*
  Hybrid Inheritance:
    - Combination of more than one type (e.g., multiple + multilevel)
*/

#include <iostream>
using namespace std;

class Person {
public:
  void showPerson() {
    cout << "I am a person" << endl;
  }
};

class Student : public Person {
public:
  void showStudent() {
    cout << "I am a student" << endl;
  }
};

class Employee {
public:
  void showEmployee() {
    cout << "I am an employee" << endl;
  }
};

class WorkingStudent : public Student, public Employee {
public:
  void showWorkingStudent() {
    cout << "I study and work!" << endl;
  }
};

int main() {
  WorkingStudent ws;
  ws.showPerson();         // from Person via Student
  ws.showStudent();        // from Student
  ws.showEmployee();       // from Employee
  ws.showWorkingStudent(); // own method

  return 0;
}
