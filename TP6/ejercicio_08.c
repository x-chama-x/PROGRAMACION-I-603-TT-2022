/* 15/10/2022
TP6 ejercicio_08: Dados dos arreglos unidimensionales A, B de n y m valores respectivamente, que
representan los elementos de un conjunto, se pide mostrar:
    a. La unión.
    b. La diferencia.
    c. La intersección.
programa hecho por x_chama_x */

#include <stdio.h>
void AuB(int[],int[]);
void diferencia(int[],int[]);
void interseccion(int[],int[]);

int main()
{
    int A[8] = {1,2,5,8,3,7,4,6};
    int B[5] = {5,10,12,7,8};
    printf("vector A: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d, ",A[i]);
    }
    printf("\nvector B: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%d, ",B[j]);
    }
    AuB(A,B);
    diferencia(A,B);
    interseccion(A,B);
    return 0;
}

void AuB(int v1[8],int v2[5])
{
    printf("\nA U B: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d, ",v1[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d, ",v2[j]);
    }
}

void diferencia(int v1[8],int v2[5])
{
    printf("\nA-B: ");
    int esDistinto;
    for (int i = 0; i < 8; i++)
    {
        int esDistinto=1;
        for (int j = 0; j < 5; j++)
        {
            if (v1[i]==v2[j])
            {
                esDistinto=0;
            } 
        }
            if (esDistinto==1)
            {
                printf("%d, ",v1[i]);
                esDistinto=1;
            }
    }
    for (int k = 0; k < 5; k++)
    {
        int esDistinto=1;
        for (int l = 0; l < 8; l++)
        {
            if (v2[k]==v1[l])
            {
                esDistinto=0;
            } 
        }
            if (esDistinto==1)
            {
                printf("%d, ",v2[k]);
                esDistinto=1;
            }
    }
}

void interseccion(int v1[8],int v2[5])
{
    printf("\nA interseccion B: ");
    int esIgual=0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (v1[i]==v2[j])
                {
                    esIgual=1;
                }
            }
            if (esIgual==1)
            {
                printf("%d, ",v1[i]);
                esIgual=0;
            }
        }
}