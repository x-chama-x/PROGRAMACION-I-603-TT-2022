/* 17/06/2022
TP4 ejercicio_06: Desarrollar las siguientes funciones para luego utilizarlos en el programa principal:
    a. Crear una función llamada “Signo” que reciba un número entero y devuelva como
    resultado 1 (uno) si el número es positivo o 0 (cero), y -1 (menos uno) si el número
    es negativo.
    b. Crear una función llamada “Mayor” que reciba dos números enteros y devuelva el
    mayor de ellos.
    c. Crear una función llamada “Factorial” que reciba un número entero y calcule su
    factorial.
programa hecho por x_chama_x */

#include <stdio.h>
int Signo (int);
int Mayor (int,int);
int Factorial (int);
int main (){
    int num,a,b,c;
    printf("ingrese un numero entero: ");
    scanf("%d",&num);
    if (Signo (num)==1)
    {
        printf("%d>=0\n",num);
    }else if (Signo (num)==-1)
    {
        printf("%d<0\n",num);
    }
    printf("ingrese un numero entero a: ");
    scanf("%d",&a);
    printf("ingrese un numero entero b distinto de a: ");
    scanf("%d",&b);
    if (Mayor(a,b)==a)
    {
        printf("%d > %d\n",a,b);
    }else if (Mayor(a,b)==b)
    {
        printf("%d > %d\n",b,a);
    }
    printf("ingrese un numero entero positivo c: ");
    scanf("%d",&c);
    printf("%d!=%d",c,Factorial(c));
    return 0;
}
int Signo (int x){
    if (x>=0)
    {
        return 1;
    }else if (x<0)
    {
        return -1;
    }
}
int Mayor (int x, int y){
    if (x>y)
    {
        return x;
    }else{
        return y;
    }
}
int Factorial (int x){
    int fact=1;
    for (int i = 1; i <= x; i++)
    {
        fact=fact*i;
    }
    return fact;
}