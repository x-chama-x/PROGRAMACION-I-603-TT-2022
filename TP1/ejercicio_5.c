/* 05/05/2022
TP1 ejercicio_5: Ingresar un número que se corresponde con una cantidad de días e indicar a cuántos
segundos equivalen.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int dias,seg;
    printf("ingresar cantidad de dias: ");
    scanf("%d",&dias);
    seg=dias*86400;
    printf("%d dias equivalen a %d segundos",dias,seg);
    return 0;
}