/* 06/05/2022
TP1 ejercicio_11: Una compañía de gaseosas comercializa tres productos: Cola, Naranja y limonada.
Realizar un programa que ingrese por teclado las ventas realizadas de cada producto y
su precio correspondiente, mostrar por pantalla un listado según el siguiente ejemplo:
Producto    Ventas  Precio  Total
Cola         200      20     4000
Naranja      500      10     5000
Limonada     550      30     1650
                    Total   10650
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int ventasCola,ventColaTotal,precioCola;
    int ventasNar,ventNarTotal,precioNar;
    int ventasLim,ventLimTotal,precioLim;
    int total;
    printf("ingresar cantidad de ventas de Cola: ");
    scanf("%d",&ventasCola);
    printf("ingresar precio unitario del producto: ");
    scanf("%d",&precioCola);
    ventColaTotal=ventasCola*precioCola;
    printf("ingresar cantidad de ventas de Naranja: ");
    scanf("%d",&ventasNar);
    printf("ingresar precio unitario del producto: ");
    scanf("%d",&precioNar);
    ventNarTotal=ventasNar*precioNar;
    printf("ingresar cantidad de ventas de Limonada: ");
    scanf("%d",&ventasLim);
    printf("ingresar precio unitario del producto: ");
    scanf("%d",&precioLim);
    ventLimTotal=ventasLim*precioLim;
    total=ventColaTotal+ventNarTotal+ventLimTotal;
    printf("\n");
    printf("producto    ventas  precio  total\n");
    printf("cola          %d      %d   %d    \n",ventasCola,precioCola,ventColaTotal);
    printf("Naranja       %d      %d   %d    \n",ventasNar,precioNar,ventNarTotal);
    printf("Limonada      %d      %d   %d    \n",ventasLim,precioLim,ventLimTotal);
    printf("                    total  %d   \n",total);
    return 0;
}