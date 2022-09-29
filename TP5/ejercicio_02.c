/* 28/09/2022
TP5 ejercicio_02: Diseñar una función void que tome un valor como parámetro de tipo entero y que
lo devuelva invertido también como parámetro. Si el número es cero, el
procedimiento no modifica el valor del parámetro.
programa hecho por x_chama_x */

#include <stdio.h>
void invertir(int *);
int main(){
    int num;
    printf("ingresar un valor entero: ");
    scanf("%d",&num);
    invertir(&num);
    printf("el numero invertido es: %d",num);
    return 0;
}

void invertir(int *x){
    int y,z;
    z=*x;
    *x=0;
    while (z>0)
    {
        y=z%10;
        *x=*x*10+y;
        z=z/10;
    }
}