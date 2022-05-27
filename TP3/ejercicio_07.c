/* 26/05/2022
TP3 ejercicio_07: Desarrollar un algoritmo que ingrese un número entero positivo 
y muestre por pantalla todos sus divisores.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num,res;
    printf("ingresar un numero entero positivo: ");
    scanf("%d",&num);
    printf("divisores de %d: ",num);
    for (int i = num; i > 0; i--) 
    {
        if (num%i==0)
        {
            res=num/i;
            printf("%d, ",res);
        }
        
    }
    return 0;
}

