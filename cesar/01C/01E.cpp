#include <iostream>

#include <string>

using namespace std;

typedef struct {
  int day;
  string month;
  int year;
} BirthDate;

typedef struct {
  int age;
  string name;
  float salary;
  BirthDate birthDate;
} Emp;

int main() {

  Emp emp[3];

  for (int i = 0; i < 3; i++) {
    cin >> emp[i].age;
    cin >> emp[i].name;
    cin >> emp[i].salary;
    cin >> emp[i].birthDate.day >> emp[i].birthDate.month >>
        emp[i].birthDate.year;
  }

  for (int i = 0; i < 3; i++) {
    cout << emp[i].age << endl;
    cout << emp[i].name << endl;
    cout << emp[i].salary << endl;
    cout << emp[i].birthDate.day << endl;
    cout << emp[i].birthDate.month << endl;
    cout << emp[i].birthDate.year << endl;
  }

  cout << "\n";

  return 0;
}