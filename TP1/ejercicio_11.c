/* 06/05/2022
TP1 ejercicio_11: Una compañía de gaseosas comercializa tres productos: Cola, Naranja y limonada.
Realizar un programa que ingrese por teclado las ventas realizadas de cada producto y
su precio correspondiente, mostrar por pantalla un listado según el siguiente ejemplo:
Producto    Ventas  Precio  Total
Cola         200      20     4000
Naranja      500      10     5000
Limonada     550      30    16500
                    Total   25000
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int ventasCola,ventasNar,ventasLim;
    float precioCola,precioNar,precioLim;
    float ventColaTotal,ventNarTotal,ventLimTotal,total;
    printf("ingresar cantidad de ventas de Cola: ");
    scanf("%d",&ventasCola);
    printf("ingresar precio unitario del producto: ");
    scanf("%f",&precioCola);
    ventColaTotal=ventasCola*precioCola;
    printf("ingresar cantidad de ventas de Naranja: ");
    scanf("%d",&ventasNar);
    printf("ingresar precio unitario del producto: ");
    scanf("%f",&precioNar);
    ventNarTotal=ventasNar*precioNar;
    printf("ingresar cantidad de ventas de Limonada: ");
    scanf("%d",&ventasLim);
    printf("ingresar precio unitario del producto: ");
    scanf("%f",&precioLim);
    ventLimTotal=ventasLim*precioLim;
    total=ventColaTotal+ventNarTotal+ventLimTotal;
    printf("\n");
    printf("producto    ventas  precio   total\n");
    printf("cola      %6d %8.2f %9.2f    \n",ventasCola,precioCola,ventColaTotal);
    printf("Naranja   %6d %8.2f %9.2f    \n",ventasNar,precioNar,ventNarTotal);
    printf("Limonada  %6d %8.2f %9.2f    \n",ventasLim,precioLim,ventLimTotal);
    printf("                    total  %5.2f   \n",total);
    return 0;
}