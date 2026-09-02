#include <iostream>

using namespace std;

typedef struct {
    char titular[50];
    int numero;
    float saldo;
} ContaBancaria;

void depositar(ContaBancaria* c, float valor) {
    c->saldo = c->saldo + valor;
    cout << "Deposito realizado.\n";
}

void sacar(ContaBancaria* c, float valor) {
    if (valor > c->saldo) {
        cout << "Saldo insuficiente.\n";
        return;
    }
    c->saldo = c->saldo - valor;
    cout << "Saque realizado.\n";
}

void exibirSaldo(ContaBancaria* c) {
    cout << "Saldo de " << c->titular << ": R$ " << c->saldo << "\n";
}

int main() {
    ContaBancaria conta;
    int opcao;
    float valor;

    cout << "Titular: ";
    cin >> conta.titular;
    cout << "Numero da conta: ";
    cin >> conta.numero;
    conta.saldo = 0;

    while (1) {
        cout << "\n1 - Depositar\n";
        cout << "2 - Sacar\n";
        cout << "3 - Exibir saldo\n";
        cout << "4 - Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Valor: ";
            cin >> valor;
            depositar(&conta, valor);
        } else if (opcao == 2) {
            cout << "Valor: ";
            cin >> valor;
            sacar(&conta, valor);
        } else if (opcao == 3) {
            exibirSaldo(&conta);
        } else {
            return 0;
        }
    }
}
