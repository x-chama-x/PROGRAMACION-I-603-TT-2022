/* 16/09/2022
actividad_02: Intercambiar el valor de 2 variable con pasaje por referencia
programa hecho por x_chama_x */

#include <stdio.h>
void intercambio(int *,int*);

int main (){
    int num1=2,num2=4;
    intercambio(&num1,&num2);
    printf("a=%d\n",num1);
    printf("b=%d\n",num2);
    return 0;
}

void intercambio(int *a, int *b ){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}