/* 20/05/2022
TP2 ejercicio_04: Desarrolla un algoritmo que le permita leer 
dos valores A y B (enteros) e indicar si la suma de los dos números es par.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int A,B;
    printf("ingrese valor A: ");
    scanf("%d",&A);
    printf("ingrese valor B: ");
    scanf("%d",&B);
    if((A+B)%2==0){
        printf("es par");
    }else{
        printf("no es par");
    }
    return 0;
}