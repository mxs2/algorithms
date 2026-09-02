#include <iostream>

using namespace std;

typedef struct {
    float base;
    float altura;
} Retangulo;

float calcularArea(Retangulo r) {
    return r.base * r.altura;
}

float calcularPerimetro(Retangulo r) {
    return 2 * (r.base + r.altura);
}

int main() {
    Retangulo retangulo;

    cout << "Base: ";
    cin >> retangulo.base;
    cout << "Altura: ";
    cin >> retangulo.altura;

    cout << "\nArea: " << calcularArea(retangulo) << "\n";
    cout << "Perimetro: " << calcularPerimetro(retangulo) << "\n";

    return 0;
}
