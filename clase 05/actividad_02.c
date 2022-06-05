/* 03/06/2022
actividad_01: Algoritmo de suma de 2 valores en una funcion (modulo)
programa hecho por x_chama_x */

#include <stdio.h>
int suma (void){ // desarrollo de la funcion
    int a,b;
    printf("ingrese un numero: ");
    scanf("%d",&a);
    printf("ingrese otro numero: ");
    scanf("%d",&b);
    return a+b;

}
int main (){
    printf("la suma es: %d",suma());
    return 0;
}