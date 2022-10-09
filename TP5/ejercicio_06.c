/* 02/10/2022
TP5 ejercicio_06: Desarrollar un algoritmo que ingrese un valor en decimal 
y a través de una función recursiva lo devuelva en binario.
programa hecho por x_chama_x */

#include <stdio.h>
void decAbin(int);
int main()
{
    int num;
    printf("ingresar un valor decimal: ");
    scanf("%d",&num);
    printf("%d base 10 a base 2 = ",num);
    decAbin(num);
    return 0;
}
void decAbin(int x)
{
    if (x==0)
    {
        printf("%d",0);
    }
    else
    {
        decAbin(x/2);
        printf("%d",x%2);
    }

}