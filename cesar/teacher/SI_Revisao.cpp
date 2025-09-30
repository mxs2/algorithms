#include<iostream>

using namespace std;

struct No
{
    int valor;
    No* prox;
};

No* inserir(No* lista, int valor) {
    No* novo = new No; // No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;
    if (!lista) 
        return novo;
    
    No* temp = lista;
    while (temp->prox) 
        temp = temp->prox;
    temp->prox = novo;
    delete temp;
    return lista;
}

No* reverter_lista(No* lista) {
    No* atual = lista;
    No* anterior = nullptr;
    while (atual != nullptr) {
        No* prox = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = prox;
    }
    return anterior;
}

void imprimir(No* l)
{
    No* temp = l;

    while (temp != NULL)
    {
        cout<<temp->valor << ", "; 
        temp = temp->prox;
    }
}

int main()
{
    No* lista = NULL;
    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);
    lista = inserir(lista, 40);
    lista = inserir(lista, 50);

    //lista = reverter(lista);
    //lista = reverterLista(lista);
    lista = reverter_lista(lista);
    imprimir(lista);

    return 0;
}


/////////////////////

/*#include<iostream>

using namespace std;

struct No {
    int valor;
    No* prox;
};

No* push(No* pilha, int v)
{
    No* novo = new No;
    novo->valor = v;
    novo->prox = pilha;
    return novo;

}

No* pop(No* p)
{
    No* temp = p;
    p = p->prox;
    delete temp;
    return p;
}

void isEmpty(No* p)
{   
    if(p == NULL)
        cout<<"Pilha Vazia.\n";
    else
        cout<<"Pilha com conteudo.\n";
}

void top(No* p)
{
    cout<<"\nO valor do topo da pilha eh: " << p->valor << ".\n";
}

int main()
{
    No* pilha = NULL;
    int valores[3];

    cout<<"Digite o primeiro numero: ";
    cin>>valores[0];
    cout<<"\nDigite o segundo numero: ";
    cin>>valores[1];
    cout<<"\nDigite o primeiro numero: ";
    cin>>valores[2];
    
    isEmpty(pilha);

    pilha = push(pilha, valores[0]);
    isEmpty(pilha);
    pilha = push(pilha, valores[1]);
    pilha = push(pilha, valores[2]);

    top(pilha);

    pilha = pop(pilha);
    No* temp = pilha;

    while (temp != NULL)
    {
        cout<< temp->valor << ", ";
        temp = temp->prox;
    
    }    
    cout<<endl;

    system("PAUSE");
}*/

//////////////////////////////////////////

/*#include<iostream>
#include<string.h>
using namespace std;

int contar_digitos(string c, int n)
{
    if(c[n] == '\0' )
        return 0;
    return 1 + contar_digitos(c, n + 1);
}

int main()
{
    int num = 0;
    int qtd_caracteres = 0;
    string numcarac;
    
    cout<<"Digite um numero inteiro: ";
    cin>>num;

    numcarac = to_string(num);
    qtd_caracteres = contar_digitos(numcarac, 0);

    cout<<"\nA quantidade de caracteres eh: " << qtd_caracteres << ". \n";

    system("PAUSE");
}*/