/* 23/05/2022
TP3 ejercicio_03: Desarrollar un algoritmo que, ingrese un número entero entre 0 y 10 (validar este valor) 
y muestre por pantalla la tabla de multiplicar del número ingresado.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num;
    int boolean = 0;
    do
    {
        printf("ingresar un numero entero entre 0 y 10: ");
        scanf("%d",&num);
        if ((num<0) || (num>10))
        {
            printf("valor ingresado no valido\n");
            boolean=1;
        }else{
            boolean=0;
        }
        
    } while (boolean == 1);
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}