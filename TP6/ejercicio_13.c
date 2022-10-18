/* 17/10/2022
TP6 ejercicio_13: Se cargan datos a una matriz de enteros de 3x4, se pide informar:
    a. Los datos cargados en la matriz.
    b. Promedio general. (Función Promedio).
    c. Porcentaje de positivos. (Funcion Porcentaje)
    d. Sumatoria de números pares ingresados en la matriz. (Función SumaPares)
programa hecho por x_chama_x */

#include <stdio.h>
void mostrarMatriz(int [3][4]);
void promedio(int [3][4]);
void porcentaje(int [3][4]);
void SumaPares(int [3][4]);

int main ()
{
    int m[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    mostrarMatriz(m); //a.
    promedio(m); //b.
    porcentaje(m); //c.
    SumaPares(m); //d.
    return 0;
}
void mostrarMatriz(int matriz[3][4])
{
    printf("matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d, ",matriz[i][j]);
        }
        printf("\n");
    }
}
void promedio(int matriz[3][4])
{
    float prom;
    int suma=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            suma=suma+matriz[i][j];
        }
    }
    prom= (float)suma/12;
    printf("promedio general: %.1f",prom);
}
void porcentaje(int matriz[3][4])
{
    int positivos=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j]>0)
            {
                positivos=positivos+1;
            }
        }
    }
    positivos=(positivos*100)/12;
    printf("\nporcentaje de positivos %d%%",positivos);
}
void SumaPares(int matriz[3][4])
{
    int suma=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j]%2==0)
            {
                suma=suma+matriz[i][j];
            }
        }
    }
    printf("\nsuma de numeros pares:  %d",suma);
}