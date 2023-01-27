/* 27/01/2023
TP7 ejercicio_12: Teniendo en cuenta el archivo creado anteriormente “deportistas”, leerlo y
separarlo en otros dos archivos nuevos. En uno los jugadores de tenis y en otro los
jugadores de fútbol. Mostrarlos por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define cantDatos 5

typedef struct 
{
    //Campos de la estructura
    int DNI;
    char NombreApellido [30];
    char deporte[10];
} datos; // Definicion de un "nuevo" tipo de datos de estructura

void leerArchivoBin(datos []); // leer y procesar archivo deportistas.dat
void crearArchivosBin(datos []); // crear archivos futbol.dat y tenis.dat
void leerDatosArchivos(); // leer los datos de futbol.dat y tenis.dat.dat
int main()
{
    datos deportista [cantDatos];
    leerArchivoBin(deportista);
    crearArchivosBin(deportista);
    leerDatosArchivos();
    return 0;
}

void leerArchivoBin(datos v[cantDatos])
{
    char *p;
    char cadena[20];
    FILE *f;
    f= fopen("deportistas.dat", "rb");
    if (f != NULL)
    {
        p=fgets(cadena,100,f);
        for (int i = 0; p!= NULL; i++) // cambio a un bucle for por conveniencia para detectar los datos de la cadena del archivo
        {
            v[i].DNI=atoi(cadena); // atoi(char) Convierte una cadena a su valor numérico (entero)
            p=fgets(cadena,100,f);
            strcpy(v[i].NombreApellido, cadena);
            p=fgets(cadena,100,f);
            strcpy(v[i].deporte, cadena);
            p=fgets(cadena,100,f);
        }
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    fclose(f);
}

void crearArchivosBin(datos v[cantDatos])
{
    FILE *fsoccer,*ftenis;
    fsoccer=fopen("futbol.dat","wb");
    ftenis=fopen("tenis.dat","wb");
    for (int i = 0; i < cantDatos; i++)
    {
        if (strcmp(v[i].deporte, "futbol\n") == 0) // lo comparo con un salto de linea incluido que arrastré desde el archivo deportistas.dat 
        {
            fprintf(fsoccer,"%d\n",v[i].DNI); // Uso fprintf porque fwrite NO ME FUNCIONÓ
            fprintf(fsoccer,"%s",v[i].NombreApellido);
            //fprintf(fsoccer,"%s\n",v[i].deporte);
        }else
        {
            fprintf(ftenis,"%d\n",v[i].DNI); // Uso fprintf porque fwrite NO ME FUNCIONÓ
            fprintf(ftenis,"%s",v[i].NombreApellido);
            //fprintf(ftenis,"%s\n",v[i].deporte);
        }
    }
    fclose(fsoccer);
    fclose(ftenis);
}

void leerDatosArchivos()
{
    char *p;
    char cadena[20];
    FILE *fsoccer,*ftenis;
    printf("archivo futbol:\n");
    fsoccer= fopen("futbol.dat", "rb");
    if (fsoccer != NULL)
    {
        p=fgets(cadena,100,fsoccer);
        while (p!= NULL)
        {
            printf("%s",cadena);
            p=fgets(cadena,100,fsoccer);
        }
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    fclose(fsoccer);
    printf("archivo tenis:\n");
    ftenis= fopen("tenis.dat", "rb");
    if (fsoccer != NULL)
    {
        p=fgets(cadena,100,ftenis);
        while (p!= NULL)
        {
            printf("%s",cadena);
            p=fgets(cadena,100,fsoccer);
        }
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    fclose(ftenis);
}


