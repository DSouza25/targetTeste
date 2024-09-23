#include <stdio.h>
#include <stdlib.h>

int main(){
    char stringFornecida[100];
    int contadorDeA = 0;

    system("cls");
    printf("Digite sua string: ");
    fgets(stringFornecida, sizeof(stringFornecida), stdin);
    system("cls");

    for (int i = 0; i < sizeof(stringFornecida); i++)
    {
        if (stringFornecida[i] == 'a' || stringFornecida[i] == 'A')
        {
            contadorDeA++;
        }        
    }
    if (contadorDeA > 0)
    {
        printf("A string fornecida tem %d letra(s) A.\n\n", contadorDeA);
    }else{
        printf("A string fornecida não tem a letra A.\n\n");
    }
    return 0;
}