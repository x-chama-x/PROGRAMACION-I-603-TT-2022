/* 03/06/2022
actividad_01: Algoritmo de suma de 2 valores en una funcion (modulo)
programa hecho por x_chama_x */

#include <stdio.h>
void suma (int x,int y){
    printf("la suma es: %d",x+y);
}
int main (){
    int a,b;
    printf("ingrese un numero: ");
    scanf("%d",&a);
    printf("ingrese otro numero: ");
    scanf("%d",&b);
    suma (a,b);
    return 0;
}