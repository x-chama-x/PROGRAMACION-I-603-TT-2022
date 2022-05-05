/* 05/05/2022
TP1 ejercicio_4: Ingresar dos valores que corresponden a la base y altura de un triángulo "equilatero" y obtener: el
perímetro y la superficie.
programa hecho por x_chama_x */

#include<stdio.h>
int main (){
    float base,altura,per,sup;
    printf("ingresar base del triangulo: ");
    scanf("%f",&base);
    printf("ingresar altura del triangulo: ");
    scanf("%f",&altura);
    sup=(base*altura)/2;
    per=base*3;
    printf("perimetro: %.2f\n",per);
    printf("superficie: %.2f",sup);
    return 0;
}