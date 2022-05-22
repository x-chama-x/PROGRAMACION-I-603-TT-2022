/* 20/05/2022
TP2 ejercicio_03: Desarrollar un algoritmo que Ingrese tres números e indique cuál es el menor, 
si los tres son iguales indicarlo con un mensaje.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    float num1,num2,num3,min;
    printf("ingresar primer numero: ");
    scanf("%f",&num1);
    printf("ingresar segundo numero: ");
    scanf("%f",&num2);
    printf("ingresar tercer numero: ");
    scanf("%f",&num3);
    min=num1;
    if(num2<min){
        min=num2; 
    }else if(num3<min){
        min=num3;
    }else if((min==num2)&&(min==num3)){
        printf("los tres numeros son iguales\n");
    }
    printf("el valor mas bajo es: %.2f",min);
    return 0;
}