/* 29/04/2022
actividad_1: Diseñar un algoritmo para las siguientes situaciones:
    a) mostrar el mensaje ("bienvenido").
    b) ingresar el nombre de un usuario y mostrar ("bienvenido usuario").
    c) ingresar tres numeros y mostrar el promedio.
    d) ingresar el monto de una factura y calcular el IVA (21%).
       mostrar monto,porcentaje de IVA y total a pagar.
programa hecho por x_chama_x */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char usuario [20];
    float n1,n2,n3;
    float prom,monto,iva;
    printf("bienvenido\n");// a)
    printf("ingrese nombre de usuario: "); //b)
    scanf("%s",usuario);
    printf("bienvenido %s\n",usuario);
    printf("ingresar primer numero: ");//c)
    scanf("%f",&n1);
    printf("ingresar segundo numero: ");//c)
    scanf("%f",&n2);
    printf("ingresar tercer numero: ");//c)
    scanf("%f",&n3);
    prom = (n1+n2+n3)/3;
    printf("el promedio es: %.2f\n",prom);//c)
    printf("ingresar monto: $");//d)
    scanf("%f",&monto);
    iva = (monto/100)*21;
    printf("monto : $%.2f\n",monto);//d)
    printf("iva: $%.2f\n",iva);//d)
    printf("total a pagar: $%.2f",monto+iva);//d)
    return 0;
}