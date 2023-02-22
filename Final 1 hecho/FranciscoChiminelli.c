/* 20/02/2023
Final:
    Enunciado: Un sistema encargado de registrar los distintos usuarios que acceden a una determinada
    aplicación almacena en un archivo denominado (usuarios.txt) los nombres de usuarios y un
    código numérico para controlar que usuarios entraron al sistema y con qué frecuencia.
    Se pide
        1. Crear una función que abra el archivo y liste el fichero completo.
        2. Ingresar un código de usuario luego, a través de una función que tome como
        parámetros de entrada el fichero y el numero ingresado, indique en el programa
        principal cuantas veces dicho usuario ingreso al sistema.
        3. Crear una función que guarde en memoria en la estructura de registros dada(*), los
        nombres y los códigos de los usuarios cuyo código esta entre 200 y 450. Listar dicha
        información a través de una función recursiva.

        (*)
        typedef struct
        {
        int cod;
        char nom[30];
        } datos;

programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
#define n 100 //int numRegistros

typedef struct
{
    int cod;
    char nom[30];
} datos;

void listarFichero(); // punto 1
int buscarUsuario(FILE *f,int codigoIngresado);
void guardarDatosEstructura(datos*,int*); // tengo que usar el llamado por referencia (datos*) al utilizar un vector de estructuras
void listarUsuarios(datos *,int);

int main()
{
    FILE *f;
    int codigoIngresado;
    datos registro[n];
    int n2=0; // cantidad de datos guardados en la estructura
    listarFichero();
    //// Punto 3 
    guardarDatosEstructura(registro,&n2);
    printf("\nusuarios cuyo codigo esta entre 200 y 450:\n");
    listarUsuarios(registro, n2);
    // Punto 2 --> pedir codigo a usuario  
    printf("\ningresar codigo de usuario: ");
    scanf("%d",&codigoIngresado);
    f = fopen("usuarios.txt","r");
    if (f != NULL)
    {
        int frecuencia = buscarUsuario(f,codigoIngresado);
        printf("\nEl usuario con codigo %d ingreso %d veces al sistema\n", codigoIngresado, frecuencia);
        fclose(f);
    }
    else
    {
        printf("Error de apertura de archivo\n");
    }
    return 0;
}

void listarFichero()
{
    FILE *f;
    char cadena [n];
    char *res;
    f=fopen("usuarios.txt","r");
    if (f != NULL)
    {
        printf("\nlistado:\n");
        res = fgets(cadena, n, f);
        while (res != NULL)
        {
            printf("%s", cadena);
            res = fgets(cadena, n, f);
        }
        fclose(f);
    }
    else
    {
        printf("Error de apertura de archivo\n");
    }
}

int buscarUsuario(FILE *f,int codigoIngresado) 
{
    int frecuencia=0;
    int codigoLeido; // codigo que se leera de la cadena del archivo "usuarios.txt" con la función sscanf
    char cadena [n];
    char *res;
    res = fgets(cadena, n, f);
    while (res != NULL)
    {
        sscanf(cadena, "%*s %d", &codigoLeido); // lee la cadena, descarta el formato string y guarda el formato entero en la variable codigoLeido
        if (codigoLeido==codigoIngresado)
        {
            frecuencia=frecuencia+1;
        }
        res = fgets(cadena, n, f);
    }
    return frecuencia;
}

void guardarDatosEstructura(datos *registro,int*numRegEstructura)
{
    FILE *f;
    f=fopen("usuarios.txt","r");
    if (f != NULL)
    {
        int i = 0;
        char nombresGuardados[n][30]; // arreglo para almacenar los nombres ya guardados
        while (!feof(f) && i < n) // agregamos la condición i < n para evitar desbordamientos de memoria
        {
            int codigo;
            char nombre[30];
            fscanf(f, "%s %d", nombre, &codigo);
            if (codigo >= 200 && codigo <= 450) 
            {
                // Verificar si el nombre ya ha sido guardado
                int j, encontrado = 0;
                for (j = 0; j < i && !encontrado; j++)
                {
                    if (strcmp(nombresGuardados[j], nombre) == 0)
                    {
                        encontrado = 1;
                    }
                }
                if (!encontrado) // si el nombre no ha sido guardado, se lo agrega a la estructura
                {
                    registro[i].cod = codigo;
                    strcpy(registro[i].nom, nombre);
                    strcpy(nombresGuardados[i], nombre);
                    i++;
                }
            *numRegEstructura=i;
            }
        }
        fclose(f);
    }
    else
    {
        printf("Error de apertura de archivo\n");
    }
}


void listarUsuarios(datos *registro,int numRegEstructura)
{
    if (numRegEstructura == 0) 
    {
        return;
    }
    printf("%s, %d\n", (*registro).nom, (*registro).cod);
    listarUsuarios(registro+1, numRegEstructura-1);
}