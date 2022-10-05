/* 04/10/2022
TP6 ejercicio_01: Desarrollar un algoritmo que cargue un vector con 50 números enteros y luego los
muestre por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
int main()
{
    srand(time(NULL)); // funcion para generar numeros al azar
    int vector[50];
    
    for (int i = 0; i < 50; i++) // cargarVector
    {
        vector[i]=1+rand() % 9; // 1+rand() % 9 --> formula que genera un numero aleatorio
    }
    
    for (int j = 0; j < 50; j++) // mostrarVector
    {
        printf("%d, ",vector[j]);
    }
    return 0;
}