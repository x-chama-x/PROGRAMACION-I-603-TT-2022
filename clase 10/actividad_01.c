/* 30/09/2022
actividad_01: definir un vector de 50 elementos y cargar solo datos en las posiciones 
pares. Crear 2 funciones, una para la carga y otra para mostrar.
programa hecho por x_chama_x */

void cargarVector(int []); // cargar vector como parametro (prototipo FUNCION) --> int []
void mostrarVector(int []);
#include <stdio.h>
int main(){
    int vector [5];
    cargarVector(vector);
    mostrarVector(vector); // llamar a la funcion con un vector como parametro --> (nombre_del_vector)
    return 0;
}

void cargarVector(int vector[]){ // cargar vector como parametro en una FUNCION --> int vector[]
    
    for (int i = 0; i <= 5; i++)
    {
        if ((i%2==0)&&(i!=0))
        {
            printf("cargar dato: ");
            scanf("%d",&vector[i]);
        }else{
            vector[i]=0;
        }
    }
}

void mostrarVector(int vector[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ",vector[i]);
    }
    
}