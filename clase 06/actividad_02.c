/* 12/06/2022
actividad_02: Desarrollar un algoritmo que calcule 
el doble de un numero entero. (usar la funcion doble)

programa hecho por x_chama_x */
#include <stdio.h>
int doble (int);
int main(){
    int num;
    printf("ingresar un numero entero: ");
    scanf("%d",&num);
    printf("el doble del numero %d es %d",num,doble(num));


    return 0;
}
int doble (int x){
    int doble;
    doble = x*2;
    return doble;
}