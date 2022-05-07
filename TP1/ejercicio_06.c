/* 05/05/2022
TP1 ejercicio_06: Ingresar un valor en segundo e indicar a cuantos dias, horas, minutos y segundos
equivale.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int seg;
    float min,horas,dias;
    printf("ingresar un valor en segundos: ");
    scanf("%d",&seg);
    min=(float)seg/60;
    horas=(float)seg/3600;
    dias=(float)seg/86400;
    printf("%d segundos equivalen a %f dias\n",seg,dias);
    printf("%d segundos equivalen a %f horas\n",seg,horas);
    printf("%d segundos equivalen a %f minutos",seg,min);
    return 0;
}