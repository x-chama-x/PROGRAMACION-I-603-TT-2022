/* 26/05/2022
TP3 ejercicio_11: Desarrollar un algoritmo que ingrese dos números enteros, 
(primero < segundo), validar y muestre por pantalla los números del primer número al segundo.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int primero,segundo,boolean=0;
    printf("ingresar primer numero entero: ");
    scanf("%d",&primero);
    do
    {
        printf("ingresar segundo numero entero: ");
        scanf("%d",&segundo);
        if (segundo<primero)
        {
            boolean=1;
            printf("segundo<primero.. valor ingresado no valido\n");
        }else{
            boolean=0;
        }
    } while (boolean==1);
    for ( int i = primero; i <= segundo; i++)
    {
        printf("%d, ",i);
    }
    return 0;
}