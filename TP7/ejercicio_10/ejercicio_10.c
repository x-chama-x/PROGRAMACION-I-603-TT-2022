/* 19/01/2023
TP7 ejercicio_10: Crear una función que tome como parámetros de entrada el archivo creado en el
punto anterior y dos vectores de enteros, calcular y guardar los números pares en un vector, 
los impares en otro y que además calcule y muestre a través de la misma
función la cantidad de ceros cargados.
programa hecho por x_chama_x */

#include <stdio.h>
void procesarDatos(int [],int [],int *);
void leerVectoresYdatos(int [],int [],int);

int main()
{
    int vPar[3],vImpar[4];
    int contCeros=0;
    procesarDatos(vPar,vImpar,&contCeros);
    leerVectoresYdatos(vPar,vImpar,contCeros);
    return 0;
}

void procesarDatos(int vPar[],int vImpar[],int *contCeros)
{
    int num;
    int i=0,j=0;
    FILE *f;
    f= fopen("numeros.dat", "rb");
    if (f != NULL)
    {
        fread(&num, sizeof(int), 1, f);
        while (!feof(f))
        {
            if ((num%2==0)&&(num!=0))
            {
                vPar[i]=num;
                i=i+1;
            }
            else if ((num%2!=0)&&(num!=0))
            {
                vImpar[j]=num;
                j=j+1;
            }
            else if (num==0)
            {
                *contCeros=*contCeros+1;
            }
            
            fread(&num, sizeof(int), 1, f);
        }
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
}

void leerVectoresYdatos(int vPar[],int vImpar[],int contCeros)
{
    printf("vector par: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ",vPar[i]);
    }
    printf("\nvector impar: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d, ",vImpar[i]);
    }
    printf("\ncantidad de ceros: %d",contCeros);
}


