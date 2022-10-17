/* 16/10/2022
TP6 ejercicio_09: Desarrollar un algoritmo que cargue una matriz pidiendo al usuario el número de
filas y columnas, posteriormente mostrar la matriz en pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
void mostrarMatriz(int y,int x,int dim [y][x]);
void cargarMatriz(int y,int x,int dim [y][x]);
int main ()
{
    srand(time(NULL)); // funcion para generar numeros al azar
    int m,n;
    printf("ingrese la cantidad de filas que tendra la matriz: ");
    scanf("%d",&m);
    printf("ingrese la cantidad de columnas que tendra la matriz: ");
    scanf("%d",&n);
    int matriz [m][n];
    cargarMatriz(m,n,matriz);
    mostrarMatriz(m,n,matriz);
    return 0;
}

void cargarMatriz(int y,int x,int dim [y][x]){
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            dim[i][j]=1+rand() % 9; // 1+rand() % 9 --> formula que genera un numero aleatorio
        }
        
    }
}

void mostrarMatriz(int y,int x,int dim [y][x])
{
    printf("matriz:\n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d",dim[i][j]);
        }
        printf("\n");
    }
}


