/* 11/01/2023
TP7 ejercicio_05: Desarrollar un algoritmo que cree y guarde en un archivo de texto “Primos.txt”, los
1000 primeros números primos. Cada número se escribirá en una línea. Crear una
función EsPrimo() que indique dicha condición.
programa hecho por x_chama_x */

#include <stdio.h>
void procesarArchivo();
int EsPrimo(int num);
int main()
{
    procesarArchivo();
    return 0;
}

void procesarArchivo()
{
    FILE *f;
    const int cant = 1000; // cantidad de numeros a imprimir
    f=fopen("Primos.txt","w");
    for (int i = 0; i < cant; i++)
    {
        if (EsPrimo(i)==1)
        {
            fprintf(f,"%d\n",i);
        }
    }
    fclose(f);
}

int EsPrimo(int num)
{
    if (num == 0 || num == 1) return 0;
    if (num == 4) return 0;
    for (int x = 2; x < num / 2; x++)
    {
        if (num % x == 0) return 0;
    }return 1;
}