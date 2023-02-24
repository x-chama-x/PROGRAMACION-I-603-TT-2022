/* 20/02/2023
Final:
    Enunciado: Una entidad deportiva cuenta con un archivo de texto de acceso secuencial denominado “Socios.txt”. 
    La información que guarda dicho archivo es la siguiente: 
    código de socio, nombre y apellido, categoría (1, 2, 3), estado (A, I), deuda. 
        Se pide: 
        1. Crear una función que reciba el nombre del archivo como parámetro y 
        obtenga de dicho archivo toda la información de los socios activos (estado ‘A’). 
        Mostrar dicha información. Generar un vector con la siguiente estructura:
        
        struct Asociado {
            int Codigo;
            char nombre[20];
            int categoria;
            char estado;
            float deuda;
        };

        2. Total, adeudado por cada categoría:
            a. Crear una función “Saldo”, que calcule el total adeudado por cada categoría.
            b. Crear una función recursiva “Imprimir” que muestre la información creada en el punto (a), de la siguiente forma:
            Categoría	Deuda total
            xxxxxx
            xxxxxx
            xxxxxx

        3. Crear una función void “Maximo” que encuentre la mayor deuda registrada. 
        Luego informe en el programa principal los registros completos de el/los socios que registren dicho importe.

programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
#define n 100 // cantidad de socios del vector de estructura

typedef struct {
    int Codigo;
    char nombre[20];
    int categoria;
    char estado;
    float deuda;
}Asociado; 

typedef struct {
    float saldoTotalC1;
    float saldoTotalC2;
    float saldoTotalC3;
}datos; // punto 2

typedef struct {
    int Codigo;
    char nombre[20];
    int categoria;
    char estado;
    float deuda;
}deudaMaxima; 


void sociosActivos(Asociado *,int*); // punto 1
void listarSociosActivos(Asociado *,int); // punto 1
void saldo(datos*); // punto 2
void Imprimir(datos,int); // punto 2
void maximo(deudaMaxima *,int*); // punto 3

int main()
{
    Asociado socios[n];
    datos saldoCategorias; // punto 2
    deudaMaxima sociosConDeudaMaxima[n]; // punto 3
    int cantSociosAsociados=0;
    int cantSociosConDeudaMax=0;
    sociosActivos(socios,&cantSociosAsociados); 
    listarSociosActivos(socios,cantSociosAsociados);
    saldo(&saldoCategorias);
    Imprimir(saldoCategorias,1);
    maximo(sociosConDeudaMaxima,&cantSociosConDeudaMax);
    printf("\nsocios con mayores deudas\n");
    for (int i = 0; i < cantSociosConDeudaMax; i++)
    {
        printf("%d %s %d %c %.2f\n", sociosConDeudaMaxima[i].Codigo, sociosConDeudaMaxima[i].nombre, sociosConDeudaMaxima[i].categoria, sociosConDeudaMaxima[i].estado, sociosConDeudaMaxima[i].deuda);
    }
    return 0;
}

void sociosActivos(Asociado *socios,int *cantSociosAsociados)
{
    FILE *f;
    f=fopen("Socios.txt","r");
    if (f!=NULL)
    {
        int i = 0;
        while (!feof(f) && i < n) // se agrega la condición i < n para evitar desbordamientos de memoria
        {
            int codigo;
            char nombre[20];
            int categoria;
            char estado;
            float deuda;
            fscanf(f, "%d %s %d %c %f\n", &codigo, nombre, &categoria, &estado, &deuda);
            if (estado=='A')
            {
                socios[i].Codigo=codigo;
                strcpy(socios[i].nombre, nombre);
                socios[i].categoria=categoria;
                socios[i].estado=estado;
                socios[i].deuda=deuda;
                i++;
            }
            *cantSociosAsociados = i;
        }
        fclose(f);
    }
    else
    {
        printf("Error de apertura de archivo\n");
    }
}

void listarSociosActivos(Asociado *socios,int cantSociosAsociados)
{
    printf("socios Activos\n");
    for (int i = 0; i < cantSociosAsociados; i++)
    {
        printf("%d %s %d %c %.2f\n", socios[i].Codigo, socios[i].nombre, socios[i].categoria, socios[i].estado, socios[i].deuda);
    }
}

void saldo(datos *saldoCategorias)
{
    FILE *f;
    f=fopen("Socios.txt","r");
    if (f!=NULL)
    {
        while (!feof(f)) 
        {
            int categoria;
            float deuda;
            fscanf(f, "%*d %*s %d %*c %f\n", &categoria, &deuda);
            switch (categoria)
            {
            case 1: // si es categoria 1
                saldoCategorias->saldoTotalC1 = deuda + saldoCategorias->saldoTotalC1;
                break;
            case 2: // si es categoria 2
                saldoCategorias->saldoTotalC2 = deuda + saldoCategorias->saldoTotalC1;
                break;
            case 3: // si es categoria 3
                saldoCategorias->saldoTotalC3 = deuda + saldoCategorias->saldoTotalC1;
                break;
            }
        }
        fclose(f);
    }
    else
    {
        printf("Error de apertura de archivo\n");
    }
}

void Imprimir(datos saldoCategorias,int categoria)
{
    printf("\nCategoria\tDeuda total");
    switch (categoria)
    {
    case 1:
        printf("\n   1 %20.2f", saldoCategorias.saldoTotalC1);
        break;
    case 2:
        printf("\n   2 %20.2f", saldoCategorias.saldoTotalC2);
        break;
    case 3:
        printf("\n   3 %20.2f", saldoCategorias.saldoTotalC3);
        break;
    }

    if (categoria < 3) // sigue la recursión hasta que se hayan mostrado los tres saldos
    {
        Imprimir(saldoCategorias, categoria + 1);
    }
}

void maximo(deudaMaxima *sociosConDeudaMaxima,int*cantSociosConDeudaMax)
{
    FILE *f;
    f=fopen("Socios.txt","r");
    if (f!=NULL)
    {
        int i=0;
        float deudaMax=0;
        while (!feof(f)) 
        {
            float deuda;
            fscanf(f, "%*d %*s %*d %*c %f\n", &deuda);
            if (i==0)
            {
                deudaMax=deuda;
                i++;
            }else if (deuda>deudaMax)
            {
                deudaMax=deuda;
            }
        }
        fclose(f); // cierro porque sino no me deja usar de nuevo while (!feof(f)) 
        f=fopen("Socios.txt","r"); 
        if (f!=NULL)
        {
        i = 0;
        while (!feof(f))
        {
            int codigo;
            char nombre[20];
            int categoria;
            char estado;
            float deuda;
            fscanf(f, "%d %s %d %c %f\n", &codigo, nombre, &categoria, &estado, &deuda);
            if (deuda==deudaMax)
            {
                sociosConDeudaMaxima[i].Codigo=codigo;
                strcpy(sociosConDeudaMaxima[i].nombre, nombre);
                sociosConDeudaMaxima[i].categoria=categoria;
                sociosConDeudaMaxima[i].estado=estado;
                sociosConDeudaMaxima[i].deuda=deuda;
                i++;
            }
            *cantSociosConDeudaMax = i;
        }
        fclose(f);
        }
        else
        {
            printf("Error de apertura de archivo\n");
        }
    }
    else
    {
        printf("Error de apertura de archivo\n");
    }
}