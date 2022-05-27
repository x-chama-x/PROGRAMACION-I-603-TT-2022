/* 26/05/2022
TP3 ejercicio_09: Desarrollar un algoritmo que ingresa un número entero mayor o igual cero (validar) 
y luego muestre por pantalla el factorial del mismo
programa hecho por x_chama_x */

#include <stdio.h>
#include <math.h>
int main (){
    int num,boolean=0,fact=1;
    do
    {
        printf("ingresar un numero >= 0: ");
        scanf("%d",&num);
        if(num<0){
            boolean=1;
            printf("valor ingresado no valido\n");
        }else{
            boolean=0;
        }
    } while (boolean==1);
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    printf("%d!=%d",num,fact);
    return 0;
}