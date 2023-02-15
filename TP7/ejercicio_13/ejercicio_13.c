/* 14/02/2023
TP7 ejercicio_13: Crear y cargar un archivo binario “Final.dat”, cuya estructura de registros es
Legajo(int), NotaFinal(float). Se pide desarrollar un algoritmo que lea el archivo y
genere un vector con todos los legajos de los alumnos aprobados
(NotaFinal>=4).Mostrar el resultado por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <windows.h>
typedef struct 
{
    int legajo;
    float notaFinal;
}datos;

void crearArchivo();
void cargarArchivo(datos);
void generarVector(datos,int*,int []);
void mostrarVector(int,int []);
int main()
{
    datos alumno;
    int i=0;
    int vector[i];
    crearArchivo();
    cargarArchivo(alumno);
    generarVector(alumno,&i,vector);
    mostrarVector(i,vector);
    return 0;
}

void crearArchivo()
{
    FILE *f;
    f=fopen("Final.dat","wb");
    fclose(f);
}

void cargarArchivo(datos alumno)
{
    int i=1;
    FILE *f;
    f=fopen("Final.dat","wb");
    if (f!= NULL)
    {
        do
        {
            system("cls");
            printf("legajo=-1 para finalizar carga");
            printf("\ningrese el legajo del alumno %d: ",i);
            scanf("%d",&alumno.legajo);
            if (alumno.legajo!=-1)
            {
                printf("ingrese la nota final del alumno %d: ",i);
                scanf("%f",&alumno.notaFinal);
                fwrite(&alumno, sizeof(datos), 1, f);
                i=i+1;
            }
        } while (alumno.legajo!=-1);
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    
}

void generarVector(datos alumno,int *i,int vector[*i])
{
    FILE *f;
    f=fopen("Final.dat","rb");
    if (f!= NULL)
    {
        fread(&alumno, sizeof(datos), 1, f);
        while (!feof(f))
        {
            if (alumno.notaFinal>=4)
            {
                vector[*i]=alumno.legajo;
                *i=*i+1;
            }
            fread(&alumno, sizeof(datos), 1, f);
        }
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
}

void mostrarVector(int i,int vector[i])
{
    printf("alumnos aprobados\n");
    for (int j = 0; j < i; j++)
    {
        printf("%d\n",vector[j]);
    }
}