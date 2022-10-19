/* 14/10/2022
actividad_02: Ordenamiento por selección ejemplo 2 --> compara el elemento mas chico con respecto al primer elemento
programa hecho por x_chama_x */
#include <stdio.h>
int main()
{
    int n = 4;
    int datos[] = {19,35,34,18};
    int indiceMenor,aux;
    for (int i = 0; i < n-1; i++)
    {
        indiceMenor=i;
        for (int j = 0; j < n; j++)
        {
            if (datos[j]<datos[indiceMenor])
            {
                indiceMenor=j;
            }
            if (i!=indiceMenor)
            {
                aux=datos[i];
                datos[i]=datos[indiceMenor];
                datos[indiceMenor]=aux;
            } 
        }
    }
    return 0;
}