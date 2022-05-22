/* 20/05/2022
TP2 ejercicio_02: Desarrollar un algoritmo que ingrese un numero por teclado y luego indique si es par o impar.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num;
    printf("ingrese un numero: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("es par");
    }else{
        printf("no es par");
    }
    return 0;
}