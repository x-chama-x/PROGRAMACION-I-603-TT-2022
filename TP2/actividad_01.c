/* 20/05/2022
TP2 ejercicio_01: Desarrollar un algoritmo que ingrese por consola dos números enteros, a 
continuación indique si son iguales o distintos.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num1,num2;
    printf("ingrese el primer numero entero: ");
    scanf("%d",&num1);
    printf("ingrese el segundo numero entero: ");
    scanf("%d",&num2);
    if(num1==num2){
        printf("son iguales");

    }else{
        printf("son distintos");
    }
    return 0;
}