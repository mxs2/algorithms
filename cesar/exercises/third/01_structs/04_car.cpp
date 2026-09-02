#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct {
    char modelo[30];
    int ano;
    float preco;
} Carro;

int main() {
    Carro* carro = (Carro*)malloc(sizeof(Carro));

    cout << "Modelo: ";
    cin >> carro->modelo;
    cout << "Ano: ";
    cin >> carro->ano;
    cout << "Preco: ";
    cin >> carro->preco;

    cout << "\nModelo: " << carro->modelo << "\n";
    cout << "Ano: " << carro->ano << "\n";
    cout << "Preco: R$ " << carro->preco << "\n";

    free(carro);

    return 0;
}
