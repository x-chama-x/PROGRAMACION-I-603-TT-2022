/* 29/09/2022
TP5 ejercicio_05: Diseñar una función recursiva que calcule y muestre la suma
de los primeros “n” números naturales. El valor de n se ingresa por teclado.
programa hecho por x_chama_x */

#include <stdio.h>
void sumaNaturales (int,int);
int main (){
    int n,suma=0;
    printf("ingresar un valor entero: ");
    scanf("%d",&n);
    sumaNaturales(n,suma);
    return 0;
}

void sumaNaturales (int x,int s){
    if (x==0)
    {
       printf("la suma es: %d",s);
    }else{
        sumaNaturales(x-1,s+x);
    }
}