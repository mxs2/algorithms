#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
    char dados[100];
    int topo;
} Pilha;

void empilhar(Pilha* p, char valor) {
    p->topo++;
    p->dados[p->topo] = valor;
}

void desempilhar(Pilha* p) {
    p->topo--;
}

int estaVazia(Pilha* p) {
    return p->topo == -1;
}

int verificarParenteses(char expressao[]) {
    Pilha pilha;
    pilha.topo = -1;

    for (int i = 0; i < (int)strlen(expressao); i++) {
        if (expressao[i] == '(')
            empilhar(&pilha, '(');
        else if (expressao[i] == ')') {
            if (estaVazia(&pilha))
                return 0;
            desempilhar(&pilha);
        }
    }
    return estaVazia(&pilha);
}

int main() {
    char expressao[100];

    cout << "Digite a expressao: ";
    cin >> expressao;

    if (verificarParenteses(expressao))
        cout << "Valido\n";
    else
        cout << "Invalido\n";

    return 0;
}
