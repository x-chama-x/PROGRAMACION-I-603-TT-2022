/* 23/05/2022
TP3 ejercicio_02: Desarrollar un algoritmo que ingrese 10 números enteros y muestre 
por pantalla un mensaje únicamente cuando son positivos.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num;
    for (int i = 0; i < 11; i++)
    {
        printf("ingresar numero entero: ");
        scanf("%d",&num);
        if (num>0){
            printf("es positivo\n");
        }
    }
    return 0;  
}