/* 05/05/2022
TP1 ejercicio_7: Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de
horas trabajadas y un plus por antigüedad que corresponde al 2% por cada año
trabajado. El sueldo básico es de $4500. Se desea ingresar la cantidad de horas
trabajadas, la antigüedad y obtener el sueldo neto.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    const int sueldoBasico = 4500;
    int horasTrabajo,antiguedad,sueldoNeto;
    printf("ingresar la cantidad de horas trabajadas: ");
    scanf ("%d",&horasTrabajo);
    printf("ingresar anos de antiguedad: ");
    scanf("%d",&antiguedad);
    sueldoNeto=(sueldoBasico*horasTrabajo)+antiguedad*2;
    printf("sueldo neto = $%d",sueldoNeto);
    return 0;
}