/* 23/09/2022
actividad_01: calcular el factorial de un numero usando recursividad
programa hecho por x_chama_x */
#include <stdio.h>
int factorial(int);
int main (){
    int num;
    printf("ingresar un valor entero: ");
    scanf("%d",&num);
    printf("el factorial es: %d",factorial(num));
    return 0;
}

int factorial(int x){   // se rompe en x=13
    if(x==0){
        return 1;
    }else{
        return x*factorial(x-1); //Recursividad --> multiplica el num ingresado por el facorial de n-1
    }                            // hasta que el num sea igual a 0.
    
}