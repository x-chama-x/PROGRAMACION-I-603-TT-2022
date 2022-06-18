/* 17/06/2022
TP4 ejercicio_05: Desarrollar una función que dado un número entero devuelva true si es primo de lo
contrario que devuelva false.
basado en https://parzibyte.me/blog/2019/07/12/numero-primo-c/
programa hecho por x_chama_x */

#include <stdio.h>
#include <stdbool.h>
int esPrimo (int);
int main (){
    int num;
    printf("ingrese un numero entero: ");
    scanf("%d",&num);
    if (esPrimo(num)==true)
    {
        printf("%d es primo",num);
    }else if (esPrimo(num)==false)
    {
        printf("%d no es primo",num);
    }
    return 0;
}

int esPrimo (int x){
    if((x==0)||(x==1)||(x==4)){ // casos especiales el numero no es primo
        return false;
    }
    for (int i = 2; i < x / 2; i++) { 
        if (x%i==0) // Si es divisible por cualquiera de estos números, no es primo
        {
            return false;
        }
    }
    return true; // Si no se pudo dividir por ninguno de los de arriba, sí es primo
}