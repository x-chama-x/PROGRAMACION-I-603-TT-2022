/* 31/05/2022
TP3 AD ejercicio_01: Desarrollar un algoritmo que ingrese números enteros y muestre 
por pantalla el máximo y el mínimo. Suponer máximo y mínimo único. 
El ingreso deberá repetirse siempre que el usuario responda “s” o “S”, 
para seguir haciendo ingresos. Tener en cuenta las siguientes consideraciones:
    •	Si ingreso un solo número, entonces el mensaje dirá “Solo ingreso un dato”. 
    •	Si el máximo y el mínimo son iguales el mensaje dirá “El máximo y el mínimo coinciden”.
    •	Si no ingresó nada, el mensaje dirá “No se registraron ingresos”.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num,min,max;
    int contIngreso=0;
    char letra;
    do
    {
        printf("ingresar s o S para ingresar datos: ");
        fflush(stdin);
        scanf("%c",&letra);
        fflush(stdin);
        if((letra=='S')||(letra=='s')){
            printf("ingresar un numero entero: ");
            scanf("%d",&num);
            contIngreso=contIngreso+1;
            if(contIngreso==1){
                min=num;
                max=num;
            }else if (num>max){
                max=num;
            }else if (num<min){
                min=num;
            }
        }
    } while ((letra=='S')||(letra=='s'));
    if(contIngreso==0){
        printf("No se registraron ingresos");
    }else if (contIngreso==1){
        printf("Solo ingreso un dato");
    }else if(max==min){
        printf("El maximo y el minimo coinciden");
    }else{
        printf("num max: %d\n",max);
        printf("num min: %d",min);
    }
    return 0;
}