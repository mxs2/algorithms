#include <iostream>

using namespace std;

typedef struct {
    char titulo[50];
    char autor[50];
    int ano;
} Livro;

void exibirLivrosApos(Livro livros[], int quantidade, int ano) {
    cout << "\nLivros publicados apos " << ano << ":\n";
    for (int i = 0; i < quantidade; i++) {
        if (livros[i].ano > ano) {
            cout << livros[i].titulo << " - " << livros[i].autor << "\n";
        }
    }
}

int main() {
    Livro livros[3];
    int ano;

    for (int i = 0; i < 3; i++) {
        cout << "\nLivro " << (i + 1) << "\n";
        cout << "Titulo: ";
        cin >> livros[i].titulo;
        cout << "Autor: ";
        cin >> livros[i].autor;
        cout << "Ano: ";
        cin >> livros[i].ano;
    }

    cout << "\nDigite o ano limite: ";
    cin >> ano;

    exibirLivrosApos(livros, 3, ano);

    return 0;
}
