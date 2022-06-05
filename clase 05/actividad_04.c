/* 03/06/2022
actividad_01: Algoritmo de suma de 2 valores en una funcion (modulo)
programa hecho por x_chama_x */

#include <stdio.h>
int suma (int x,int y){ // metodo mas eficiente 
    return x+y;
}
int main (){
    int a,b;
    printf("ingrese un numero: ");
    scanf("%d",&a);
    printf("ingrese otro numero: ");
    scanf("%d",&b);
    suma (a,b);
    printf("la suma es: %d",suma(a,b));
    return 0;
}