#include<iostream>

using namespace std;

struct No
{
    int valor;
    No* prox;
};

No* inserirInicio(No* l, int v)
{
    No* novo = new No;
    novo->valor = v;
    novo->prox = l;
    return novo;
}

void exibir(No* l)
{
    No* temp = l;

    while (temp != NULL)
    {
        cout<<temp->valor << " -> ";
        temp = temp->prox;
    }
    cout<<"NULL";
    delete temp;    
}

int main()
{
    No* lista = NULL;

    exibir(lista);
    lista = inserirInicio(lista, 55);
    lista = inserirInicio(lista, 10);
    lista = inserirInicio(lista, 7);
    lista = inserirInicio(lista, 99);
    cout<<endl;
    exibir(lista);
    cout<<endl;
    
    return 0;
}

/*#include<iostream>

using namespace std;

int somaVetor(int v[], int n)
{
    if(n == 0)
        return 0;
    return v[n - 1] + somaVetor(v, n - 1);

}

int main()
{
    int vetor[] = {8, 3, 7, 10, 33};
    int retorno = 0;

    retorno = somaVetor(vetor, 5);

    cout<<"A soma dos valores do vetor eh: " << retorno << ". \n";

    system("PAUSE");
}*/