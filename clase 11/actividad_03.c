/* 14/10/2022
actividad_02: Ordenamiento por inserción ejemplo 3 --> compara el elemento mas chico con respecto al primer elemento
programa hecho por x_chama_x */

#include <stdio.h>
int main ()
{
    int n = 4;
    int datos[] = {81,22,35,18};
    int i,j,aux;
    for (int i = 0; i < n; i++)
    {
        j=i;
        aux=datos[i];
        while((j>0)&&(aux< datos [j-1]))
        {
            datos[j]=datos[j-1];
            j-1;
        }
        datos[j]=aux;
    }
    return 0;
}