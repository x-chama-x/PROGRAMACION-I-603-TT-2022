/* 28/10/2022
actividad_02: archivos de texto ejemplo 2 
cargar un  archivo de texto con caracteres y luego mostrar esos caracteres
programa hecho por x_chama_x */
#include <stdio.h>
int main ()
{
    FILE *f; 
    char c,c2; 
    
    f= fopen("archivo.txt","w"); 
    printf("fin de datos ingresando f");
    printf("\ningresar caracter: ");
    scanf("%c",&c); 
    while(c!='f')
    {
        fputc(c,f); // c para guardar cada caracter ingresado en el archivo
        printf("ingrese otro dato: ");
        fflush(stdin);
        scanf("%c",&c);
    }
    fclose(f);
    
    f= fopen("archivo.txt","r"); 
    c2=fgetc(f); // c2 para mostrar el caracter almacenado en el archvio de texto
    while(c2!=EOF) 
    {
        printf("%c",c2);
        c2=fgetc(f); 
    }
    fclose(f);
    return 0;
}