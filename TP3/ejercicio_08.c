/* 26/05/2022
TP3 ejercicio_08: Desarrollar un algoritmo que ingrese un entero positivo, 
y muestre por pantalla la suma de sus cifras.
programa hecho por x_chama_x */

#include <stdio.h>
#include <math.h>
int main (){
    int num,numBkp,numDigito,suma=0;
    printf("ingresar un numero entero positivo: ");
    scanf("%d",&num);
    numBkp=num;
    for (int i = 0; i < (log10(numBkp) + 1); i++)
    {
        numDigito=num%10;
        num=num/10;
        suma=suma+numDigito;
    }
    printf("la suma de las cifras del numero %d es: %d",numBkp,suma);
    return 0;
}