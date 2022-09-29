/* 28/09/2022
TP5 ejercicio_01: Ingresar dos números A y B y desarrollar una función void que reciba como
parámetros de entrada dichos números, que permita dejar en A el número más
grande, y lo retorne al programa principal con el cambio realizado.
programa hecho por x_chama_x */

#include <stdio.h>
void intercambio (int *,int *);
int main (){
    int A,B;
    printf("ingresar numero A: ");
    scanf("%d",&A);
    printf("ingresar numero B: ");
    scanf("%d",&B);
    intercambio(&A,&B);
    printf("el numero mas grande es: %d",A);
    return 0;
}

void intercambio (int *x,int*y){
    if (*y>*x)
    {
        *x=*y;
    }
}