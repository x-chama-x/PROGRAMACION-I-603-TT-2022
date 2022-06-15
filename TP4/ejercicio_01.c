/* 14/06/2022
TP4 ejercicio_01: El siguiente programa indica si un número leído desde el teclado es par o impar:
Crear a partir de este, las distintas funciones que se piden a continuación:
    a) Desarrollar una función void EsPar(int unNumero).
    b) Desarrollar una función int esPar(int unNumero) que devuelve 1 (uno) si es par y
       0 (cero) si es impar.
    c) Desarrollar una función char espar(int unNumero) que devuelve “V” si es par y
       “F” si es impar.
programa hecho por x_chama_x */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void EsPar (int);
int esPar (int);
char espar (int);
int main()
{
    int numero;
    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &numero);
    EsPar (numero);
    return 0;
}

void EsPar (int unNumero){
    if (unNumero % 2 == 0)
    {
        printf("Es un n%cmero par", 163);
    }
    else
    {
        printf("Es un n%cmero impar", 163);
    }
}

int esPar (int unNumero){
    if (unNumero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char espar(int unNumero){
    if (unNumero % 2 == 0)
    {
        return 'V';
    }
    else
    {
        return 'F';
    }
}