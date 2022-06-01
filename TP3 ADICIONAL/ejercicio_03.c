/* 31/05/2022
TP3 AD ejercicio_03: Se ingresan 100 valores numéricos enteros positivos. 
Desarrollar un algoritmo que determine:
a.	El rango de variación de estos valores (valor máximo - valor mínimo).
b.	El orden de ubicación de estos valores dentro de los 100 ingresados.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    const int valores = 6;
    int num,min,max;
    int posMin,posMax;
    int boolean=0;
    for (int i = 1; i <= valores; i++)
    {
        do
        {
            printf("ingresar %d numero positivo: ",i);
            scanf("%d",&num);
            if (num<0)
            {
                boolean=1;
                printf("valor ingresado no valido\n");
            }else{
                boolean=0;
            }
        } while (boolean==1);
        if (i==1)
        {
            min=num;
            max=num;
            posMin=i;
            posMax=i;
        }else if (num>max)
        {
            max=num;
            posMax=i;
        }else if (num<min)
        {
            min=num;
            posMin=i;
        }
    }
    printf("\nrango de variacion %d - %d: %d\n",max,min,max-min);
    printf("valor max en posicion %d\n",posMax);
    printf("valor min en posicion %d",posMin);
    return 0;
}
