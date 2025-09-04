#include <iostream>

using namespace std;

typedef struct {
	char nome[50];
	int matricula;
	float nota;
} Aluno;

int main() {
	Aluno A[5];

	for (int i = 0; i < 5; i++) {
		cin >> A[i].nome;
		cin >> A[i].matricula;
		cin >> A[i].nota;
	}

	for (int i = 0; i < 5; i++) {
		cout << A[i].nome << endl;
		cout << A[i].matricula << endl;
		cout << A[i].nota << endl;
	}

	return 0;
}