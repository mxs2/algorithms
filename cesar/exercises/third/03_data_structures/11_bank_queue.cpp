#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
    char nomes[100][50];
    int frente;
    int atras;
} Fila;

void chegarCliente(Fila* f, const char nome[]) {
    strcpy(f->nomes[f->atras], nome);
    f->atras++;
    cout << nome << " entrou na fila.\n";
}

void atenderCliente(Fila* f) {
    if (f->frente == f->atras) {
        cout << "Nao ha clientes na fila.\n";
        return;
    }
    cout << "Atendendo: " << f->nomes[f->frente] << "\n";
    f->frente++;
}

void exibirFila(Fila* f) {
    cout << "Fila: ";
    for (int i = f->frente; i < f->atras; i++)
        cout << f->nomes[i] << " <- ";
    cout << "NULL \n";
}

int main() {
    Fila fila;
    fila.frente = 0;
    fila.atras = 0;

    chegarCliente(&fila, "Ana");
    chegarCliente(&fila, "Bruno");
    chegarCliente(&fila, "Carlos");
    exibirFila(&fila);

    atenderCliente(&fila);
    exibirFila(&fila);

    return 0;
}
