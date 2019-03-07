#include <stdio.h>
#include <stdlib.h>
#define Maximo 10

int *copiarVetor(int *vetor, int numero);
int main()
{
    int i, *ret;
    int *vetor = NULL;
    vetor = (int *)malloc(Maximo * sizeof(int));
    if(vetor == NULL)
    {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    for(i = 0; i < Maximo; i++)
        vetor[i] = i + 10;
    ret = copiarVetor(vetor,Maximo);
    for(i = 0; i < Maximo; i++)
        printf("Valor da posicao [%d] eh: %d\n", i ,ret[i]);
    free(vetor);
    return 0;
}

int *copiarVetor(int *vetor, int numero)
{
    int i;
    int *vetor1 = NULL;
    vetor1 = (int *)malloc(Maximo * sizeof(int));
    if(vetor1 == NULL)
    {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    for(i = 0; i < Maximo; i++)
        vetor1[i] = vetor[i];
    return vetor1;
}
