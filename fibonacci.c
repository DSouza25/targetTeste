#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeroEntrada, anterior = 0, atual = 1, proximo;
    system("cls");
    printf("Digite o numero que deseja verificar: ");
    scanf("%d", &numeroEntrada);

    printf("\nSequencia Fibonacci: \n0 1 ");
    while (1)
    {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        printf("%d ", atual);
        if (atual >= numeroEntrada)
        {
            break;
        }
    }
    if (atual == numeroEntrada)
    {
        printf("\n\nO numero escolhido esta na sequencia de Fibonacci.");
    }else{
        printf("\n\nO numero escolhido nao esta na sequencia de Fibonacci.");
    }
    return 0;
}