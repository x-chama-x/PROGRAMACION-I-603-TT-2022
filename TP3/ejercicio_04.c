/* 23/05/2022
TP3 ejercicio_04: Desarrollar un algoritmo que ingrese números hasta 
ingresar un número negativo, se pide mostrar por pantalla el promedio.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    float num=0,acum=0,prom=0;
    int i=-1;
    printf("Calculadora de promedio\n");
    printf("ingresar num negativo para finalizar carga de datos\n");
    while (num >= 0){
        acum=acum+num;
        printf("ingresar numero >= 0: ");
        scanf("%f",&num);
        i=i+1;
    } 
    if(i==0){
       printf("promedio: %.2f",prom);
    }else{
        prom=acum/i;
      printf("promedio: %.2f",prom);
    }
    return 0;
}