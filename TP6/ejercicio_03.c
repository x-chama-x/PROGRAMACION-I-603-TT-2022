/* 09/10/2022
TP6 ejercicio_03: Ingresar 20 números y mostrar por pantalla el promedio, y los valores de aquellos
que superaron dicho promedio.
programa hecho por x_chama_x */

#include <stdio.h>
int main()
{
    const int cant = 20;
    int v[cant];
    int sum=0;
    float prom=0;

    for (int i = 0; i < cant; i++) // cargar vector
    {
        printf("ingresar un valor entero: ");
        scanf("%d",&v[i]);
    }

    for (int j = 0; j < cant; j++) // cargar suma de los elementos del vector
    {
        sum=sum+v[j];
    }
    
    prom= (float) sum/cant;
    printf("promedio: %.2f",prom);
    printf("\nvalores que superan al promedio: ");
    
    for (int k = 0; k < cant; k++) // mostrar valores superiores al promedio
    {
        if (v[k]>prom)
        {
            printf("%d, ",v[k]);
        }
        
    }
    return 0;
}