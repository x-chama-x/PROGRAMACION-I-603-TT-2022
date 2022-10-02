/* 02/10/2022
actividad_01: cargar una matriz de nxm con numeros al azar. 
Luego recorrer la matriz e indicar cuantos valores son 0. Tambien con 2 funciones
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
void llenarMatriz(int y,int x,int dim [y][x]); // tengo que poner el prototipo igual que la funcion xq sino me da error.
void mostrarMatriz(int y,int x,int dim [y][x]); // no puedo usar (int,int,int[][])
void contDeCeros (int y,int x,int dim [y][x]);
int main(){
    srand(time(NULL)); // funcion para generar numeros al azar
    int m,n; // dimensiones que tendra la matriz --> m->filas,n->columnas
    printf("ingrese la cantidad de filas que tendra la matriz: ");
    scanf("%d",&m);
    printf("ingrese la cantidad de columnas que tendra la matriz: ");
    scanf("%d",&n);
    printf("\n");
    int matriz [m][n]; // se genera la matriz con los valores que prop. el usuario
    llenarMatriz(m,n,matriz);
    mostrarMatriz(m,n,matriz);
    contDeCeros(m,n,matriz);
    return 0;
}

void llenarMatriz(int y,int x,int dim [y][x]){
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            dim[i][j]=1+rand() % 9; // 1+rand() % 9 --> formula que genera un numero aleatorio
        }
        
    }
}

void mostrarMatriz (int y,int x,int dim [y][x]){
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d",dim[i][j]);
        }
        printf("\n");
    }
}

void contDeCeros (int y,int x,int dim [y][x]){
    int contCeros=0;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (dim[i][j]==0)
            {
                contCeros=contCeros+1;
            }
            
        }
    }
    printf("\ncantidad de valores iguales a 0: %d",contCeros);
}