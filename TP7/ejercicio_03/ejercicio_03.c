/* 08/01/2023
TP7 ejercicio_03: Trabajando con el mismo archivo de texto anterior “Mitexto”, desarrollar un
algoritmo que ingrese un carácter e indique cuantas veces se repite dicho carácter
en el texto. Mostrar el resultado por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
char ingresarCaracter();
int vecesCaracter(char ci);
void mostrarResultado(int veces); // veces que se repite el caracter en el archivo
int main()
{
    char ci = ingresarCaracter();
    mostrarResultado(vecesCaracter(ci));
    return 0;
}

char ingresarCaracter()
{
    char ci; // caracter ingresado
    printf("ingresar caracter: ");
    scanf("%c",&ci);
    return ci;
}
int vecesCaracter(char ci)
{
    FILE *f;
    char ca; // caracter archivo
    int cont=0; // contador de veces que se repite el caracter
    f = fopen("Mitexto.txt","r");
    if (f==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo\n");
    }else
    {
        ca = getc(f);
        while (ca!=EOF)
        {
            if (ca==ci)
            {
                cont=cont+1;
            }
            ca = getc(f);
        }
    }
    return cont;
}

void mostrarResultado (int veces)
{
    printf("el caracter ingresado se repite %d vez/veces",veces);
}

