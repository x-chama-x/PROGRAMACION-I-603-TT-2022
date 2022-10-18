/* 17/10/2022
TP6 ejercicio_12: Realizar un programa que cargue una matriz de 3x3 y desarrolle un algoritmo para
obtener la diagonal principal de la matriz.
programa hecho por x_chama_x */

#include <stdio.h>
void obtenerDiagonal(int [3][3]);
int main ()
{
    int m[3][3] = {1,2,3,4,5,6,7,8,9};
    obtenerDiagonal(m);
    return 0;
}

void obtenerDiagonal(int matriz[3][3])
{
    printf("diagonal: %d, %d, %d.",matriz[0][0],matriz[1][1],matriz[2][2]);
}