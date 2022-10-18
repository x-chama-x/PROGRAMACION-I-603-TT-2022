/* 17/10/2022
TP6 ejercicio_10: --> hecho en la clase 10
TP6 ejercicio_11: Desarrollar un algoritmo que cargue un array de dos dimensiones con números
enteros, luego pida una posición X,Y y muestre por pantalla el dato correspondiente.
programa hecho por x_chama_x */

#include <stdio.h>
void pedirPosicion(int [2][3]);
int main ()
{
    int m[2][3] = {1,2,3,4,5,6};
    pedirPosicion(m);
    return 0;
}

void pedirPosicion(int matriz[2][3])
{
    int x,y;
    printf("ingrese posicion X del elemento: ");
    scanf("%d",&x);
    printf("ingrese posicion Y del elemento: ");
    scanf("%d",&y);
    printf("el elemento de la posicion (%d,%d) es: %d",x,y,matriz[x][y]);
}