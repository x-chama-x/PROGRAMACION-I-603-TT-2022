/* 16/09/2022
actividad_01: ingresar un numero e imprimir su doble usando una función y pasaje x referencia con puntero
programa hecho por x_chama_x */

#include <stdio.h>
void doble(int *);

int main (){
    int num,*p;
    printf("ingrese un valor entero: ");
    scanf("%d",&num);
    p=&num;
    doble(p);
    printf("el doble es: %d",*p);
    return 0;
}

void doble(int *a){
    *a=*a*2;
}