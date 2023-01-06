/* 28/10/2022
actividad_03: archivos de texto ejemplo 3 
cargar un  archivo de texto con cadenas de caracteres y luego mostrar esos caracteres
ALTERNATIVO -----> EN ESTE CASO SOLO LEE UNA SOLA CADENA DE CARACTERES --> NO NECESITA EL BUCLE WHILE 
programa hecho por x_chama_x */
#include <stdio.h>
int main ()
{
    char cadena [10];
    char cadena2 [10]; // cadena que "leera" el contenido (texto) del archivo 
    FILE *f; 
    f= fopen("archivo.txt","w"); 
    printf("ingresar un texto:");
    scanf("%s",&cadena);
    fputs(cadena,f); // guardar la cadena en el archivo
    fclose(f);
    
    f= fopen("archivo.txt","r");
    fgets(cadena2,10,f);
    printf("\n%s", cadena2);
    fclose(f);
    return 0;
}