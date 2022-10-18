/* 18/10/2022
TP6 ejercicio_14: Desarrollar un algoritmo que cargue una matriz con valores enteros positivos y
muestre por pantalla el máximo y mínimo ingresado.Suponer máximos y mínimos
únicos.
programa hecho por x_chama_x */
void maximo(int[2][3]);
void minimo(int[2][3]);
#include <stdio.h>
int main()
{
    int m[2][3] = {5,7,4,3,1,8};
    maximo(m);
    minimo(m);
    return 0;
}

void maximo(int matriz[2][3])
{
    int max=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==0)
            {
                max=matriz[i][j];
            }
            else if (matriz[i][j]>max)
            {
                max=matriz[i][j];
            }
        }
    }
    printf("valor maximo de la matriz: %d",max);
}

void minimo(int matriz[2][3])
{
    int min=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==0)
            {
                min=matriz[i][j];
            }
            else if (matriz[i][j]<min)
            {
                min=matriz[i][j];
            }
        }
    }
    printf("\nvalor minimo de la matriz: %d",min);
}