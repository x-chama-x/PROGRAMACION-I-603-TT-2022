/* 23/05/2022
TP2 ejercicio_06: Una compañía dedicada a servicio de mensajería realiza envios al interior 
el costo fijo de traslado es de $1500 si es corta distancia y 2000 si es larga distancia, 
luego dependerá del peso de la mercadería enviada, 
los de corta distancia si el peso supera los 20 kilos se le cobran $800 por cada kilo de exceso
y los de larga distancia se le cobra $800, cada 5 kilos excedidos. 
Desarrollar un algoritmo que ingrese el tipo de viaje y la cantidad de kilos y me devuelva el costo del viaje.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    char tipoViaje;
    float peso,costo;
    printf("ingrese el tipo de viajen\n");
    printf("corta distancia ingrese c\n");
    printf("larga distancia ingrese l\n");
    printf("--> :");
    scanf("%c",&tipoViaje);
    fflush(stdin);
    printf("ingrese la cantidad de mercaderia (kilos)\n");
    printf("--> :");
    scanf("%f",&peso);
    switch (tipoViaje)
    {
    case 'c': case'C':
        if (peso>20){
            costo=1500+800*(peso-20);
        }else{
            costo=1500;
        }
        break;
    case 'l': case'L':
        if(peso>20){
            costo=2000+800*((peso-20)/5);
        }else{
            costo=2000;
        }
        break;
    default: printf("tipo de viaje no valido");
        break;
    }
    printf("costo del viaje: $%.2f",costo);
    return 0;
}