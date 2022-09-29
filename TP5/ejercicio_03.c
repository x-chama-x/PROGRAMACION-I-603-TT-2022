/* 29/09/2022
TP5 ejercicio_03: Diseñar una función void que tome un valor como parámetro de tipo entero 
y que devuelva su módulo o valor absoluto como parámetro.
programa hecho por x_chama_x */

#include <stdio.h>
void modulo (int *);
int main(){
    int num;
    printf("ingresar un valor entero: ");
    scanf("%d",&num);
    printf("|%d|= ",num);
    modulo(&num);
    printf("%d",num);
    return 0;
}

void modulo (int *x){
    if (*x<0)
    {
        *x=*x-2**x;
    }

}