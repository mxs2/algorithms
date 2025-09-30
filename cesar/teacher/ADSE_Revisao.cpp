#include<iostream>

using namespace std;

struct No {
    int valor;
    No* prox;
};

No* inserir_inicio(No* lst, int v)
{
    No* novo = new No;
    novo->valor = v;
    novo->prox = lst;
    return novo;
}

void imprimir(No* lst)
{
    No* temp = lst;

    while (temp != NULL)
    {
        cout<<temp->valor << " -> ";
        temp = temp->prox;
    }
    
}

int main()
{
    No* lista = NULL;
    imprimir(lista);
    lista = inserir_inicio(lista, 33);
    lista = inserir_inicio(lista, 5);
    lista = inserir_inicio(lista, 99);
    lista = inserir_inicio(lista, 28);

    imprimir(lista);
    
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
    int vetor[5];
    int retorno = 0;
    for(int i = 0; i < 5; i++)
    {
        cout<<"\nDigite os o numero da posicao " << (i + 1) << ": ";
        cin>>vetor[i]; 
    }

    retorno = somaVetor(vetor, 5);
    
    cout<<"\nO resultado da soma eh: " << retorno << ". \n";    

    system("PAUSE");
}*/