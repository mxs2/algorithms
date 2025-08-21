#include <iostream>

#include <string>

using namespace std;

typedef struct {
  string name;
  int number;
  float value;
} Product;

int main() {
  Product prod[10];

  for (int i = 0; i < 10; i++) {
    cin >> prod[i].name;
    cin >> prod[i].number;
    cin >> prod[i].value;
  }

  for (int i = 0; i < 10; i++) {
    cout << prod[i].name << endl;
    cout << prod[i].number << endl;
    cout << (prod[i].number * prod[i].value) << endl;
  }

  return 0;
}