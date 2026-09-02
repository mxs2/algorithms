#include <iostream>

using namespace std;

int produto(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++)
        resultado = resultado + a;
    return resultado;
}

int main() {
    int a, b;

    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << a << " x " << b << " = " << produto(a, b) << "\n";

    return 0;
}
