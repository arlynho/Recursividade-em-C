#include <iostream>

using namespace std;

struct No
{
    int valor;
    No *prox;
};

No *cabeca = NULL;

void inserir(int valor, int posicao)
{

    if (posicao == 0)
    {
        No *el = (No *)malloc(sizeof(No));
        el->valor = valor;
        el->prox = cabeca;
        cabeca = el;
    }
    else
    {
        No *aux = cabeca;

        for (int i = 0; i < posicao - 1; i++)
        {
            aux = aux->prox;
        }

        No *el = (No *)malloc(sizeof(No));
        el->valor = valor;
        el->prox = aux->prox;
        aux->prox = el;
    }
}

int exibirRec(No *el)
{
    if (el == NULL)
        return NULL;
    cout << el->valor << endl;
    return exibirRec(el->prox);
}

void imprimir()
{
    No *aux = cabeca;
    cout << endl;
    while (aux != NULL)
    {
        cout << aux->valor << "\t" << endl;
        aux = aux->prox;
    }
    cout << endl;
}

void remover(int posicao)
{

    if (posicao == 0)
    {
        No *removido = cabeca;
        cabeca = removido->prox;
        cout << "Valor removido: " << removido->valor << endl;
        free(removido);
    }
    else
    {
        No *aux = cabeca;
        for (int i = 0; i < posicao - 1; i++)
        {
            aux = aux->prox;
        }
        No *removido = aux->prox;
        aux->prox = removido->prox;
        cout << "Valor removido: " << removido->valor << endl;
        free(removido);
    }
}

int main()
{
    inserir(1, 0);
    inserir(2, 0);
    inserir(3, 0);
    exibirRec(cabeca);
    return 0;
}