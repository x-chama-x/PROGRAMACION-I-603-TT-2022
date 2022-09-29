/* 23/09/2022
actividad_03: crear una recursiva para mostrar un numero de forma invertida
programa hecho por x_chama_x */

#include <stdio.h>
void invertir(int);
int main(){
    int num;
    printf("ingresar un valor entero de 3 cifras: ");
    scanf("%d",&num);
    invertir(num);
    return 0;
}

void invertir(int x){
   if (x<10){ // caso base
    printf("%d",x); 
   }else{
    //x=x%10; // produce un error 
    printf("%d",x%10); // lo uso acá y funciona
    invertir(x/10); // recursividad
   }
}
