/* 16/01/2023
TP7 ejercicio_08: Desarrolle un programa que pida por teclado el número de legajo de un alumno y
dos notas; que calcule el promedio y guarde toda la información en un archivo de
texto “Notas.txt”. El ingreso de datos finaliza con un legajo igual a -1.
programa hecho por x_chama_x */

#include <stdio.h>
void procesarArchivo();
int main()
{
    procesarArchivo();
    return 0;
}
void procesarArchivo()
{
    FILE *f;
    int legajo;
    int nota1,nota2;
    float prom;
    f= fopen("Notas.txt","w");
    do
    {
        printf("ingresar legajo del alumno: ");
        scanf("%d",&legajo);
        if (legajo!=-1)
        {
           fprintf(f, "legajo: %d\n", legajo); 
           printf("ingresar primer nota del alumno: ");
           scanf("%d",&nota1);
           fprintf(f, "primer nota: %d\n", nota1);
           printf("ingresar segunda nota del alumno: ");
           scanf("%d",&nota2);
           fprintf(f, "segunda nota: %d\n", nota2);
           fprintf(f, "promedio: %.1f\n", ((float) nota1+nota2)/2);
        }
        else
        {
            printf("fin de carga de datos, revise el archivo Notas.txt");
        }
    }while (legajo!=-1);
    fclose(f);
}