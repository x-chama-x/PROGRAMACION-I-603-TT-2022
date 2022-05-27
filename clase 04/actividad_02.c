/* 27/05/2022
actividad_2: Ingresar 20 valores positivos (incluyendo el 0) por teclado y mostrar por 
pantalla el valor maximo suponer un unico valor maximo.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num,max;
    for (int i = 0; i < 20; i++)
    {
        printf("ingresar un numero entero positivo: ");
        scanf("%d",&num);
        if (i==1)
        {
            max=num;
        }else if (num>max){
            max=num;
        }  
    }
    printf("el valor maximo ingresado es: %d",max);
    return 0;
}