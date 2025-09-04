#include <iostream>

using namespace std;

typedef struct {
	char nome[50];
	int idad e;
	float altura;
} Pessoa;

int main() {
	Pessoa p;

	cin >> p.nome;
	cin >> p.idade;
	cin >> p.altura;

	cout << p.nome << endl;
	cout << p.idade << endl;
	cout << p.altura << endl;

	return 0;
}