/* 27/05/2022
actividad_1: Ingresar un numero N entero (validar que sea positivo)
Se pide:
a) mostrar los primeros N numeros impares
b) la suma de los N primeros numeros pares
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num,boolean=0;
    int suma=0;
    do
    {
        printf("ingresar un numero entero positivo: ");
        scanf("%d",&num);
        if (num<=0)
        {
            boolean=1;
            printf("numero ingresado no valido\n");
        }else{
            boolean=0;
        }
    } while (boolean==1);
    printf("numeros impares: ");
    for (int i = 0; i <= num; i++)
    {
        if(i%2==0){
            suma=suma+i;
        }else{
            printf("%d, ",i);
        }
    }
    printf("\nsuma de los numeros pares: %d",suma);
    return 0;
}