/* 17/06/2022
TP4 ejercicio_07: El programa principal debe ingresar dos números enteros m y n, si ambos son positivos
validar (usar la función “Signo”), se pide:
    a. Calcular Pm (usar función “Factorial”)
    b. Calcular Pn (usar función “Factorial”)
    c. Si m>n (usar la función “Mayor”), calcular Vm,n y Cm,n (usar función “Factorial”)
A tener en cuenta:
   - Las permutaciones (P) de un número es igual al factorial del mismo.
   - Las variaciones (V) entre dos números (m,n) es: m!/(m-n)!
   - Las combinaciones (C) entre dos números (m,n) es: m!/(n!*(m-n)!)
programa hecho por x_chama_x */

#include <stdio.h>
int Signo (int);
int Factorial (int);
int Mayor (int,int);
int main (){
    int m,n,Pm,Pn;
    int VMn,CMn;
    do
    {
       printf("ingresar un numero entero positivo m: ");
       scanf("%d",&m);
       if (Signo (m)==-1)
       {
        printf("valor ingresado no valido\n");
       }
    } while (Signo (m)==-1);
    do
    {
       printf("ingresar un numero entero positivo n: ");
       scanf("%d",&n);
       if (Signo (n)==-1)
       {
        printf("valor ingresado no valido\n");
       }
    } while (Signo (n)==-1);
    Pm=Factorial(m);
    Pn=Factorial(n);
    printf("Pm=!m= %d\n",Pm);
    printf("Pn=!n= %d\n",Pn);
    
    if (Mayor(m,n)==m)
    {
        VMn=(Factorial(m))/(Factorial(m-n));
        CMn=(Factorial(m))/((Factorial(n))*(Factorial(m-n)));
        printf("VMn=m!/(m-n)= %d\n",VMn);
        printf("CMn=m!/(n!*(m-n)!= %d",CMn);
    }  
    return 0;
}

int Signo (int x){
    if (x>=0)
    {
        return 1;
    }else if (x<0)
    {
        return -1;
        printf("entro");
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

int Mayor (int x, int y){
    if (x>y)
    {
        return x;
    }else{
        return y;
    }
}