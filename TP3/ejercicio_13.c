/* 26/05/2022
TP3 ejercicio_13: Desarrollar un algoritmo que permita calificar a un grupo de alumnos de la escuela secundaria. 
Por teclado se ingresa el nombre y las tres calificaciones de cada alumno y 
con esos datos el programa debe calcular e informar el promedio de cada alumno y decir 
si está aprobado o no; para aprobar se requiere un promedio de seis o más y haber 
obtenido al menos seis en la última de las tres calificaciones. 
Luego el programa debe informar cuántos alumnos aprobaron. 
Utilizar una variable char (“S” o “N”), para decidir si quiere procesar o no la información.
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
int main (){
    char FinProceso;
    char alumno[20];
    int calif, suma=0;
    int noData=0; // se activa (1) si se ingresan datos
    float prom;
    int aprobado=0,cantAprob=0;
    do
    {
        printf("ingrese s o S para procesar la informacion\n");
        printf("ingrese n o N para seguir ingresando datos\n");
        printf("ingrese opcion: ");
        fflush(stdin);
        scanf("%c",&FinProceso);
        fflush(stdin);
        if((FinProceso=='N')||(FinProceso=='n')){
            noData=1;
            printf("ingrese el nombre del alumno: ");
            gets(alumno);
            for (int i = 1; i < 4; i++)
            {
                printf("ingrese la %d calificacion: ",i);
                scanf("%d",&calif);
                suma=suma+calif;
                if(i==3){
                    prom=suma/i;
                    if((calif>=6)&&(prom>=6)){
                      aprobado=1;  
                    }
                }
            }
            suma=0;
            printf("\npromedio del alumno %s: %.2f\n",alumno,prom);
            if(aprobado==1){
                printf("el alumno esta aprobado\n");
                printf("\n");
            }else{
                printf("el alumno esta desaprobado\n");
                printf("\n");
            }
        }
        if(aprobado==1){
            cantAprob=cantAprob+1;
            aprobado=0;
        }
    } while ((FinProceso=='N')||(FinProceso=='n'));
    if(noData==0){
        printf("\nno se ingresaron datos de alumnos");
    }else{
        printf("\ncantidad de alumnos aprobados: %d",cantAprob);
    }
    return 0;
}