/* 04/05/2022
TP1 ejercicio_2: Ingresar por teclado un valor en Km y mostrarlo expresado en metros.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int km,m;
    printf("ingresar un valor en Km: ");
    scanf("%d",&km);
    m = km*1000;
    printf("%dkm a m = %dm",km,m);
    return 0;
}


