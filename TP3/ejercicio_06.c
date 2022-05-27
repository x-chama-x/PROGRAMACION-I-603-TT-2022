/* 26/05/2022
TP3 ejercicio_06: Desarrollar un algoritmo que calcule y visualice 
en pantalla una tabla con las 20 primeras potencias de 2.
programa hecho por x_chama_x */

#include <stdio.h>
#include <math.h>
int main (){
    int res;
    for (int i = 0; i < 20; i++)
    {
        res=pow(2,i);
        printf("2 elevado a la potencia %d es %d\n",i,res);
    }
    
    return 0;
}