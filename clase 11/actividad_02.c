/* 14/10/2022
actividad_02: Ordenamiento por selección ejemplo 2 --> compara el elemento mas chico con respecto al primer elemento
programa hecho por x_chama_x */
#include <stdio.h>
void ordSeleccion(int []);
void mostrarVector(int []);
int main()
{
    int m[] = {19,35,34,18};
    printf("vector antes de ordenar: ");
    mostrarVector(m);
    ordSeleccion(m);
    printf("\nvector ordenado (menor a mayor): ");
    mostrarVector(m);
    return 0;
}

void ordSeleccion(int datos[])
{
    int n = 4;
    int indiceMenor,aux;
    for (int i = 0; i < n - 1; i++)
    {
        indiceMenor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (datos[j] < datos[indiceMenor])
            indiceMenor = j;
        }
        if (i != indiceMenor)
        {
            aux = datos[i];
            datos[i] = datos[indiceMenor];
            datos[indiceMenor] = aux;
        }
    }
}

void mostrarVector(int datos[])
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",datos[i]);
    }
}
