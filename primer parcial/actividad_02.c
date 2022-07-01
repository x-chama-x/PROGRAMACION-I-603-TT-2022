/* 01/07/2022
actividad_02: MCD --> Mayor comun divisor
programa hecho por x_chama_x */

#include <stdio.h>
int validarNum (int);
int MCD (int,int);
int main (){
    int num1,num2;
    do
    {
        printf("ingresar primer numero: ");
        scanf("%d",&num1);
    } while ((validarNum (num1)==-1));
    do
    {
        printf("ingresar segundo numero: ");
        scanf("%d",&num2);
    } while ((validarNum (num2)==-1));

    printf("el MCD entre el num %d y %d es: %d",num1,num2,MCD(num1,num2));
    return 0;
}

int validarNum (int x){
    if (x>1000)
    {
        printf("valor ingresado no valido\n");
        return -1;
    }else{
        return x;
    }
}

int MCD (int x, int y){
    const int tope = ((x+y)/2);
    int div;
    for (int i = 1; i < tope; i++)
    {
        if ((x%i==0)&&(y%i==0))
        {
            div=i;
        }
    }
    return div; 
}