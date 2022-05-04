/* 04/05/2022
TP1 ejercicio_1: Crear un programa que, dados dos valores para a y b, los intercambie.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int a=1,b=2,c;
    printf("a = %d -- b = %d\n",a,b);
    c=a; 
    a=b;
    b=c;
    printf("a = %d -- b = %d",a,b);
    return 0;
}

