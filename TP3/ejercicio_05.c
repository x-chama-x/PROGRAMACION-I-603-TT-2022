/* 24/05/2022
TP3 ejercicio_05: Desarrollar un algoritmo que ingrese números hasta leer un cero, 
calcular y mostrar por pantalla cuántos de ellos son negativos y cuántos son positivos.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    float num;
    int contPos=0,contNeg=0;
    printf("ingresar numeros distintos de 0\n");
    printf("ingresar 0 para finalizar la carga de datos\n");
    do
    {
        printf("ingresar numero: ");
        scanf("%f",&num);
        if(num>0){
            contPos=contPos+1;
        }else if (num<0){
            contNeg=contNeg+1;
        }
    } while (num!=0);
    printf("cantidad de numeros positivos: %d\n",contPos);
    printf("cantidad de numeros negativos: %d",contNeg);
    return 0;
}