/* 02/10/2022
ejercicios 7,8,9 hechos durante la clase --> clase 9
TP5 ejercicio_09: Desarrollar un algoritmo que muestre por pantalla una media pirámide de dígitos
como se muestra en la siguiente figura. Crear una función recursiva para generar
cada fila de la de la media pirámide. El usuario introduce por teclado el valor N<10,
que representa el número que indica el final de la media pirámide.
1
21
321
4321
programa hecho por x_chama_x */

#include <stdio.h>
void piramide (int);
int main()
{
    int num;
    printf("ingresar un valor n<10: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        piramide(i);
        printf("\n");
    }
    return 0;
}

void piramide(int x)
{
    if (x>0)
    {
        printf("%d",x);
        piramide(x-1);
    }
}

