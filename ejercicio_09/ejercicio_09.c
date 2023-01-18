/* 16/01/2023
TP7 ejercicio_09: Crear un archivo binario “numeros.dat”, en donde se guarden una sucesión de
números enteros positivos o nulos la carga finaliza cuando se lee un valor negativo .
programa hecho por x_chama_x */

#include <stdio.h>
#include<windows.h>
#define n 10
void procesarArchivoBin();
void leerArchivoBin();
int main ()
{
    procesarArchivoBin();
    leerArchivoBin();
    return 0;
}

void procesarArchivoBin()
{
    FILE *f;
    int num=1;
    f= fopen("numeros.dat", "wb");
    if (f != NULL)
    {
        do
        {
            system("cls");
            printf("ingrese un valor entero (valor negativo para finalizar): ");
            scanf("%d",&num);
            if (num>=0)
            {
                fwrite(&num, sizeof(int), 1, f);
            }
        }while (num>=0);
        system("cls");
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
}

void leerArchivoBin()
{
    int num;
    FILE *f;
    printf("archivo binario numeros.dat:\n");
    f= fopen("numeros.dat", "rb");
    if (f != NULL)
    {
        fread(&num, sizeof(int), 1, f);
        while (!feof(f))
        {
        printf("%d\n", num);
        fread(&num, sizeof(int), 1, f);
        }
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
}
