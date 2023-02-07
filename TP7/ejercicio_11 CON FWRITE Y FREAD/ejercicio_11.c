/* 19/01/2023
TP7 ejercicio_11: Desarrolle un programa que genere un archivo binario “deportistas.dat”, cuya
estructura interna sea: DNI(int), NombreApellido(30), deporte(10), tenis o fútbol.
Cargar dicho archivo usando algún criterio conveniente, luego recorrerlo y mostrarlo
por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
#include <windows.h>
void crearArchivoBin();
void cargarDatosArchivo(); // usando fwrite
void leerArchivoBin(); // usando fread
int main()
{
    system("cls");
    crearArchivoBin();
    cargarDatosArchivo();
    leerArchivoBin();
    return 0;
}

void crearArchivoBin() // basicamente se crea el archivo binario "deportistas.dat"
{
    FILE *f;
    f=fopen("deportistas.dat","wb");
    fclose(f);
}

void cargarDatosArchivo() // se cargan los datos en el archivo binario "deportistas.dat"
{
    int DNI;
    char NombreApellido[30],deporte[10];
    FILE *f;
    f=fopen("deportistas.dat","wb");
    if (f!= NULL)
    {
        do
        {
            printf("DNI=-1 para finalizar carga");
            printf("\ningrese el DNI del deportista: ");
            scanf("%d",&DNI);
            if (DNI!=-1)
            {
                fwrite(&DNI, sizeof(int), 1, f);
                printf("ingrese el NombreApellido del deportista: ");
                fflush(stdin);
                gets(NombreApellido);
                fwrite(&NombreApellido, sizeof(char), strlen(NombreApellido), f); //strlen(NombreApellido) --> tamaño de la cadena ingresada
                printf("ingrese el deporte del deportista: ");
                fflush(stdin);
                gets(deporte);
                fwrite(&deporte, sizeof(char), strlen(deporte), f);
            }
            
        } while (DNI!=-1);
        fclose(f);
        printf("\nFinalizo la carga de datos...\n");
    }
    else
    {
        printf("Error en la apertura del archivo");
    } 
}

void leerArchivoBin() // mostrar datos del archivo "deportistas.dat"
{
    
    FILE *f;
    int DNI;
    char NombreApellido[30],deporte[10];
    f=fopen("deportistas.dat","rb");
    if (f!=NULL)
    {
        printf("Muestreo de datos del archivo:\n");
        fread(&DNI, sizeof(int), 1, f);
        fread(&NombreApellido, sizeof(char), strlen(NombreApellido), f);
        fwrite(&deporte, sizeof(char), strlen(deporte), f);
        while (!feof(f))
        {
            printf("\nDNI: %d",DNI);
            printf("\nNombreApellido: %s",NombreApellido);
            printf("\ndeporte: %s",deporte);
            fread(&DNI, sizeof(int), 1, f);
            fread(&NombreApellido, sizeof(char), strlen(NombreApellido), f);
            fwrite(&deporte, sizeof(char), strlen(deporte), f);
        }
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    
}