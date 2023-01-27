/* 19/01/2023
TP7 ejercicio_11: Desarrolle un programa que genere un archivo binario “deportistas.dat”, cuya
estructura interna sea: DNI(int), NombreApellido(30), deporte(10), tenis o fútbol.
Cargar dicho archivo usando algún criterio conveniente, luego recorrerlo y mostrarlo
por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#define cantDatos 1 // poner la cantidad de datos a ingresar
typedef struct 
{
    //Campos de la estructura
    int DNI;
    char NombreApellido [30];
    char deporte[10];
} datos; // Definicion de un "nuevo" tipo de datos de estructura

void cargarDatosEstructura(datos[]);
void generarArchivoBin(datos[]);
void leerArchivoBin();
int main()
{
    datos deportista[cantDatos];
    cargarDatosEstructura(deportista);
    generarArchivoBin(deportista);
    leerArchivoBin();
    return 0;
}

void cargarDatosEstructura(datos v[cantDatos]) 
{
    for (int i = 0; i < cantDatos; i++)
    {
        printf("ingrese el DNI del deportista %d: ",i+1);
        scanf("%d",&v[i].DNI);
        printf("ingrese el NombreApellido del deportista %d: ",i+1);
        scanf("%s",&v[i].NombreApellido);
        printf("ingrese el deporte del deportista %d: ",i+1);
        scanf("%s",&v[i].deporte);
    }
}

void generarArchivoBin(datos v[cantDatos]) // generar y cargar archvio binario
{
    FILE *f;
    f= fopen("deportistas.dat", "wb");
    if (f != NULL)
    {
        for (int i = 0; i < cantDatos; i++) // escritura de datos del vector de estructura
        {
            fprintf(f,"%d\n",v[i].DNI); // Uso fprintf porque fwrite NO ME FUNCIONÓ
            fprintf(f,"%s\n",v[i].NombreApellido);
            fprintf(f,"%s\n",v[i].deporte);
        }
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    fclose(f);
}


void leerArchivoBin()
{
    char *p;
    char cadena[20];
    FILE *f;
    f= fopen("deportistas.dat", "rb");
    if (f != NULL)
    {
        p=fgets(cadena,100,f);
        while (p!= NULL)
        {
            printf("%s",cadena);
            p=fgets(cadena,100,f);
        }
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    fclose(f);
}