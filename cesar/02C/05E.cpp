#include <iostream>

using namespace std;

#include <cstring>

struct Fila {
	char dado[40];
	struct Fila* prox;
};

Fila* enqueue(Fila* fim, const char* valor) {
	Fila* novo = new Fila;
	strncpy(novo->dado, valor, 39);
	novo->dado[39] = '\0';
	novo->prox = NULL;

	if (fim != NULL) fim->prox = novo;

	return novo;
}

Fila* dequeue(Fila* inicio) {
	if (inicio == NULL) return NULL;
	Fila* temp = inicio;
	inicio = inicio->prox;
	delete temp;
	return inicio;
}

void exibirFila(Fila* fila) {
	Fila* temp = fila;
	while (temp != NULL) {
		cout << temp->dado << " ";
		temp = temp->prox;
	}
	cout << "NULL" << endl;
}

int main() {
	Fila* inicio = NULL;
	Fila* fim = NULL;

	fim = enqueue(fim, "Ana");
	inicio = inicio ? inicio : fim;
	fim = enqueue(fim, "Bruno");
	inicio = inicio ? inicio : fim;
	fim = enqueue(fim, "Carlos");
	inicio = inicio ? inicio : fim;

	inicio = dequeue(inicio);
	exibirFila(inicio);

	while (inicio != NULL) {
		inicio = dequeue(inicio);
	}

	return 0;
}