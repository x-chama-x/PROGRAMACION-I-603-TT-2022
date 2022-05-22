/* 22/05/2022
TP2 ejercicio_05: Desarrollar un algoritmo que ingrese un número entero 
de cuatro dígitos e indique con un mensaje si es capicua.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num,unidMil,cent,dec,unid;
    printf("ingresar un numero entero de 4 digitos: ");
    scanf("%d",&num);
    unid=num%10;
    dec=((num/10)%10);
    cent=((num/100)%10);
    unidMil=num/1000;
    if((unid==unidMil)&&(dec==cent)){
        printf("el numero %d es capicua",num);
    }else{
        printf("el numero %d no es capicua",num);
    }
    return 0;
}