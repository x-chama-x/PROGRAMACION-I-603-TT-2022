/* 11/01/2023
TP7 ejercicio_06: Desarrollar una función que tome como parámetro de entrada el archivo creado en
el punto anterior y liste su contenido por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
void procesarArchivo();
int EsPrimo(int num);
void listarArchivo();
int main()
{
    procesarArchivo();
    listarArchivo();
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

void listarArchivo()
{
    FILE *f;
    char c;
    f=fopen("Primos.txt","r");
    if (f==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo\n");
    }else
    {
        while (c!=EOF)
        {
            c = fgetc(f);
            printf("%c",c);
        }
    }
    fclose(f);
}