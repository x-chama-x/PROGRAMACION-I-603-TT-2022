/* 28/10/2022
actividad_03: archivos de texto ejemplo 3 
cargar un  archivo de texto con cadenas de caracteres y luego mostrar esos caracteres
programa hecho por x_chama_x */
#include <stdio.h>
#include <string.h>
int main ()
{
    char cadena [10];
    char cadena2 [10]; // cadena que "leera" el contenido (texto) del archivo 
    char *p; // puntero que devolvera la funcion fgets, señalando al texto leído --> fgets trabaja siempre con el puntero
    char res;
    FILE *f; 
    f= fopen("archivo.txt","w"); 
    printf("Va a leer una cadena? S/N: ");
    fflush(stdin);
    scanf("%c", &res);
    while ((res == 'S')||(res == 's'))
    {
        fflush(stdin);
        gets(cadena); //Lee una cadena de caracteres del teclado
        strcat(cadena, "\n");
        fputs(cadena, f); //Graba la cadena leída
        printf("Va a leer otra cadena? S/N ");
        fflush(stdin);
        scanf("%c", &res);
    }
    fclose(f);

    f= fopen("archivo.txt","r");
    p = fgets(cadena2,10,f);
    while (p != NULL) // bucle que leera la cadena2
    {
        printf("%s", cadena2);
        p = fgets(cadena2,10,f);
    }
    fclose(f);
    return 0;
}