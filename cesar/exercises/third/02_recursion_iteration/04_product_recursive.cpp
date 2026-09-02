#include <iostream>

using namespace std;

int produto(int a, int b) {
    if (b == 0)
        return 0;
    return a + produto(a, b - 1);
}

int main() {
    int a, b;

    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << a << " x " << b << " = " << produto(a, b) << "\n";

    return 0;
}
