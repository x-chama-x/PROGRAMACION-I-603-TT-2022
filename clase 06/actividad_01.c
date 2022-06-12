/* 10/06/2022
actividad_01: Desarrollar un algoritmo que a leer 2 numeros (enteros)
y un caracter y según la opcion ingresada, hacer cualquiera de las operaciones basicas:
's' o 'S': Suma
'r' o 'R': Resta
'm' o 'M': Multiplicacion
'd' o 'D': Division
'e' o 'E': Exit

programa hecho por x_chama_x */

#include <stdio.h>
#include <conio.h>
#include <windows.h> // funcion retardo sleep ()
void suma (int,int);
void resta (int,int);
void prod (int,int);
void divs (int,int);

int main (){
    int num1,num2;
    char opcion;
    printf("ingresar primer numero: ");
    scanf("%d",&num1);
    printf("ingresar segundo numero: ");
    scanf("%d",&num2);
    system("cls");
    do
    {
        printf("'s' o 'S': Suma\n");
        printf( "'r' o 'R': Resta\n");
        printf("'m' o 'M': Multiplicacion\n");
        printf("'d' o 'D': Division\n");
        printf("'e' o 'E': Exit\n");
        printf("\ningresar opcion: ");
        fflush(stdin);
        scanf("%c",&opcion);
        fflush(stdin);
        switch (opcion)
        {
        case 's': case 'S':
            suma (num1,num2);
            Sleep(3000);
            system("cls");
            break;
        case 'r': case 'R':
            resta (num1,num2);
            Sleep(3000);
            system("cls");
            break;
        case 'm': case 'M':
            prod (num1,num2);
            Sleep(3000);
            system("cls");
            break;
        case 'd': case 'D':
            divs (num1,num2);
            Sleep(3000);
            system("cls");
            break;
        case 'e': case 'E':
            printf("\nSaliendo...");
            break;
        default:
            printf("\nopcion ingresada no valida");
            Sleep(2000);
            system("cls");
            break;
        }
    } while ((opcion!='e')&&(opcion!='E'));

 return 0;
}

void suma (int x,int y){
    int suma;
    suma=x+y;
    printf("\n%d+%d=%d",x,y,suma);
}

void resta (int x,int y){
    int resta;
    resta=x-y;
    printf("\n%d-%d=%d",x,y,resta);
}

void prod (int x,int y){
    int prod;
    prod=x*y;
    printf("\n%d*%d=%d",x,y,prod);
}

void divs (int x,int y){
    float div;
    if (y==0)
    {
        printf("\nno existe la division por 0");
    }else{
        div= (float) x/y;
        printf("\n%d/%d=%.2f",x,y,div); 
    }
}
