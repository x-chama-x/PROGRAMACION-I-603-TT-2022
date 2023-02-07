/* 19/01/2023
TP7 ejercicio_11: Desarrolle un programa que genere un archivo binario “deportistas.dat”, cuya
estructura interna sea: DNI(int), NombreApellido(30), deporte(10), tenis o fútbol.
Cargar dicho archivo usando algún criterio conveniente, luego recorrerlo y mostrarlo
por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct // creo la estructura para almacenar momentaneamente los datos que se escibiran (fwrite) al archivo binario
{
    int DNI;
    char NombreApellido[30];
    char Deporte [10];
}Datos;

void crearArchivoBin();
void cargarDatosArchivo(Datos); // usando fwrite
void leerArchivoBin(Datos); // usando fread
int main()
{
    Datos Deportista; // se usa una estructura sola y NO un vector de estructura.
    crearArchivoBin();
    cargarDatosArchivo(Deportista);
    leerArchivoBin(Deportista);
    return 0;
}

void crearArchivoBin() // basicamente se crea el archivo binario "deportistas.dat"
{
    FILE *f;
    f=fopen("deportistas.dat","wb");
    fclose(f);
}

void cargarDatosArchivo(Datos Deportista) // se cargan los datos en el archivo binario "deportistas.dat"
{
    FILE *f;
    f=fopen("deportistas.dat","wb");
    if (f!= NULL)
    {
        do
        {
            system("cls");
            printf("DNI=-1 para finalizar carga");
            printf("\ningrese el DNI del deportista: ");
            scanf("%d",&Deportista.DNI);
            if (Deportista.DNI!=-1)
            {
                printf("ingrese el NombreApellido del deportista: ");
                fflush(stdin);
                gets(Deportista.NombreApellido);
                printf("ingrese el deporte del deportista: ");
                fflush(stdin);
                gets(Deportista.Deporte);
                fwrite(&Deportista, sizeof(Datos), 1, f); // se usa un solo fwrite que escribe toda la estructura (incluye sus variables internas) en el archivo bianrio
            }
            
        } while (Deportista.DNI!=-1);
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    } 
}

void leerArchivoBin(Datos Deportista) // mostrar datos del archivo "deportistas.dat"
{
    FILE *f;
    system("cls");
    f=fopen("deportistas.dat","rb");
    if (f!=NULL)
    {
        printf("\nListado completo deportistas:\n");
        fread(&Deportista, sizeof(Datos), 1, f);
        while (!feof(f))
        {
            printf("%d \t%s \t%s\n", Deportista.DNI,Deportista.NombreApellido,Deportista.Deporte);
            fread(&Deportista, sizeof(Datos), 1, f); // se usa un solo fread que lee toda la estructura (incluye sus variables internas)
        }
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
}