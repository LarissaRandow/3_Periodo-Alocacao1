#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

float *prod_vetorial(float *vetor_u,float *vetor_v)
{
    float *produto = NULL;
    produto = (float *)malloc(TAMANHO * sizeof(float));
    if(produto == NULL)
    {
        printf("Memoria insuficiente");
        exit(1);
    }

    produto[0] = (vetor_u[1] * vetor_v[2]) - (vetor_v[1] * vetor_u[2]);
    produto[1] = (vetor_u[2] * vetor_v[0]) - (vetor_v[2] * vetor_u[0]);
    produto[2] = (vetor_u[0] * vetor_v[1]) - (vetor_v[0] * vetor_u[1]);

    return produto;
}

int main()
{
    int i;
    float *vetor_v = NULL, *vetor_u = NULL, *prodVet;
    vetor_u = (float*)malloc(TAMANHO * sizeof(float));
    vetor_v = (float*)malloc(TAMANHO * sizeof(float));
    if(vetor_u == NULL)
    {
        printf("Deu ruim");
        exit(1);
    }
    if(vetor_v == NULL)
    {
        printf("Deu ruim");
        exit(1);
    }

    for(i = 0; i < TAMANHO; i++)
    {
        vetor_u[i] = i;
        vetor_v[i] = i;
    }

    prodVet = prod_vetorial(vetor_u,vetor_v);


    for(i = 0; i < TAMANHO; i++)
    {
        printf("Posicao vetor_ u[%i] = %.2f\n",i,vetor_u[i]);
        printf("Posicao vetor_v[%i] = %.2f\n",i,vetor_v[i]);
    }


    for(i = 0; i < TAMANHO; i++)
        printf("Posicao produto[%i] = %.2f\n",i,prodVet[i]);

    return 0;
}
