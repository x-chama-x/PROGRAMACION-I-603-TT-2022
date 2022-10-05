/* 04/10/2022
TP6 ejercicio_02: Desarrollar un algoritmo que cargue un vector con 50 elementos y luego informe por
pantalla:
    a. El cuarto elemento.
    b. El segundo elemento.
    c. Los elementos en orden invertido.
    d. El producto entre el primero y el último elemento.
    e. Los elementos de índice par.
    f. Los elementos de índice impar.
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
int main()
{
    srand(time(NULL)); // funcion para generar numeros al azar
    int vector[5];
    
    for (int i = 0; i < 5; i++) // cargarVector
    {
        vector[i]=1+rand() % 9; // 1+rand() % 9 --> formula que genera un numero aleatorio
    }

    for (int j = 0; j < 5; j++) // mostrarVector
    {
        printf("%d, ",vector[j]);
    }
    
    printf("\n%d\n",vector[3]); // a.
    
    printf("%d\n",vector[1]); // b.
    
    for (int k = 4; k >= 0; k--) //c.
    {
        printf("%d, ",vector[k]);
    }
    
    printf("\n");
    
    for (int l = 1; l < 5; l++) //d.
    {
        if (l%2==0)
        {
            printf("%d, ",vector[l]); 
        }
    }
    
    printf("\n");
    
    for (int l = 1; l < 5; l++) //e.
    {
        if (l%2!=0)
        {
            printf("%d, ",vector[l]); 
        }
    }
    return 0;
}