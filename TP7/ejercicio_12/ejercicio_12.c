/* 27/01/2023
TP7 ejercicio_12: Teniendo en cuenta el archivo creado anteriormente “deportistas”, leerlo y
separarlo en otros dos archivos nuevos. En uno los jugadores de tenis y en otro los
jugadores de fútbol. Mostrarlos por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int DNI;
    char NombreApellido[30];
    char Deporte [10];
}Datos;

void crearArchivosBin(); // crea futbolistas.dat y tenistas.dat
void procesarArchivosBin(Datos);
void leerArchivosBin(Datos);
int main()
{
    Datos Deportista;
    crearArchivosBin();
    procesarArchivosBin(Deportista);
    leerArchivosBin(Deportista);
    return 0;
}

void crearArchivosBin()
{
    FILE *archivoFutbol,*archivoTenis;
    archivoFutbol=fopen("futbolistas.dat","wb");
    archivoTenis=fopen("tenistas.dat","wb");
    fclose(archivoFutbol);fclose(archivoTenis);
}


void procesarArchivosBin(Datos Deportista) 
{
    FILE *f,*archivoFutbol,*archivoTenis;
    f=fopen("deportistas.dat","rb");
    archivoFutbol=fopen("futbolistas.dat","wb");
    archivoTenis=fopen("tenistas.dat","wb");
    if (f!=NULL||archivoFutbol!=NULL||archivoTenis!=NULL)
    {
        fread(&Deportista, sizeof(Datos), 1, f);
        while (!feof(f))
        {
            if (strcmp(Deportista.Deporte, "futbol") == 0)
            {
                fwrite(&Deportista, sizeof(Datos), 1, archivoFutbol);
            }
            else
            {
                fwrite(&Deportista, sizeof(Datos), 1, archivoTenis);
            }
            fread(&Deportista, sizeof(Datos), 1, f);
        }
        fclose(f);fclose(archivoFutbol);fclose(archivoTenis);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
}

void leerArchivosBin(Datos Deportista)
{
    FILE *archivoFutbol,*archivoTenis;
    if (archivoFutbol!=NULL)
    {
        printf("\nFutbolistas:\n");
        archivoFutbol=fopen("futbolistas.dat","rb");
        fread(&Deportista, sizeof(Datos), 1, archivoFutbol);
        while (!feof(archivoFutbol))
        {
            printf("%d \t%s \t%s\n", Deportista.DNI,Deportista.NombreApellido,Deportista.Deporte);
            fread(&Deportista, sizeof(Datos), 1, archivoFutbol);
        }
        fclose(archivoFutbol);
        printf("Tenistas:\n");
        archivoTenis=fopen("tenistas.dat","rb");
        fread(&Deportista, sizeof(Datos), 1, archivoTenis);
        while (!feof(archivoTenis))
        {
            printf("%d \t%s \t%s\n", Deportista.DNI,Deportista.NombreApellido,Deportista.Deporte);
            fread(&Deportista, sizeof(Datos), 1, archivoTenis);
        }
        fclose(archivoTenis);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }   
}
