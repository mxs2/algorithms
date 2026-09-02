#include <iostream>
#include <string.h>

using namespace std;

int palindromo(char palavra[], int inicio, int fim) {
    if (inicio >= fim)
        return 1;
    if (palavra[inicio] != palavra[fim])
        return 0;
    return palindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[100];

    cout << "Digite uma palavra: ";
    cin >> palavra;

    if (palindromo(palavra, 0, strlen(palavra) - 1))
        cout << "Eh palindromo.\n";
    else
        cout << "Nao eh palindromo.\n";

    return 0;
}
