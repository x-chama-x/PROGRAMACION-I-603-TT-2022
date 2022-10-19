/* 14/10/2022
actividad_01: Ordenamiento Burbuja ejemplo 1 
--> intercambia el elemento de la posicion siguiente, con el elemento de la posicion actual
programa hecho por x_chama_x */
#include <stdio.h>

int main ()
{
    int aux;
    int n = 4;
    int datos[] = {81,22,35,18};
    system("cls");
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            if (datos[j]>datos[j+1])
            {
                aux=datos[j];
                datos[j]=datos[j+1];
                datos[j+1]=aux;
            }
        }
    }
    return 0;
}