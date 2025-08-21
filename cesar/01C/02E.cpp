#include <iostream>

#include <string>

using namespace std;

typedef struct {
  string name;
  float n1;
  float n2;
} Student;

int main() {
  Student stu[3];

  for (int i = 0; i < 3; i++) {
    cin >> stu[i].name;
    cin >> stu[i].n1;
    cin >> stu[i].n2;
  }

  for (int i = 0; i < 3; i++) {
    cout << stu[i].name << endl;
    cout << ((stu[i].n1 + stu[i].n2) / 2);
  }

  cout << "\n";

  return 0;
}