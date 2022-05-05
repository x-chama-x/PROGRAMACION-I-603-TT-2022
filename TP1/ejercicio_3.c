/* 05/05/2022
TP1 ejercicio_3: Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la
división (para esta última suponer divisor distinto de cero).
programa hecho por x_chama_x */

#include <stdio.h>
int main(){
    float num1,num2,suma,resta,prod,div;
    printf("ingresar el primer numero: ");
    scanf("%f",&num1);
    printf("ingresar el segundo numero distinto de 0: ");
    scanf("%f",&num2);
    suma=num1+num2;
    resta=num1-num2;
    prod=num1*num2;
    div=num1/num2;
    printf("%.2f+%.2f=%.2f\n",num1,num2,suma);
    printf("%.2f-%.2f=%.2f\n",num1,num2,resta);
    printf("%.2f*%.2f=%.2f\n",num1,num2,prod);
    printf("%.2f/%.2f=%.2f",num1,num2,div);
    return 0;
}