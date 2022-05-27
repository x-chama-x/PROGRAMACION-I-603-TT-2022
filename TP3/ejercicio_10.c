/* 26/05/2022
TP3 ejercicio_10: Desarrollar un algoritmo que escriba en pantalla todos los números pares comprendidos entre 1 y 50.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    for (int i = 1; i < 50; i++)
    {
        if (i%2==0)
        {
            printf("%d, ",i);
        }
        
    }
    return 0;
}
