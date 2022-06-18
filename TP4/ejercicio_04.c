/* 17/06/2022
TP4 ejercicio_04: Cree y desarrolle una función “potencia” que reciba por parámetros dos enteros X
(base) e Y (potencia); y devuelve por pantalla el resultado de dicha operación.
programa hecho por x_chama_x */

#include <stdio.h>
#include <math.h>
void potencia (int,int);
int main (){
    int base,exp;
    printf("ingrese la base: ");
    scanf("%d",&base);
    printf("ingrese el exponente: ");
    scanf("%d",&exp);
    potencia(base,exp);
    return 0;
}

void potencia(int x, int y){
printf("%d^%d=%.0f",x,y,pow(x,y));
}