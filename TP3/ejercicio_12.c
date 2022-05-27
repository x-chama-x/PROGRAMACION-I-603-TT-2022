/* 26/05/2022
TP3 ejercicio_12: Desarrollar un algoritmo que pida al usuario dos números y una letra: “I”, “i” ó “p”, “P”, 
luego mostrar en pantalla los pares (si se pulsó la “p”, “p”) ó impares (si se pulsó la “i”, “I”), 
comprendidos entre el primer número y el segundo. Tener en cuenta que el 
primer número debe ser menor al segundo y validar que ingrese las letras correspondientes.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num1,num2,boolean=0;
    char letra;
    printf("ingresar primer numero entero: ");
    scanf("%d",&num1);
    do
    {
        printf("ingresar segundo numero entero: ");
        scanf("%d",&num2);
        if (num2<num1)
        {
            boolean=1;
            printf("segundo<primero.. valor ingresado no valido\n");
        }else{
            boolean=0;
        }
        printf("mostrar numeros pares --> p o P\n");
        printf("mostrar numeros impares --> I o i\n");
    } while (boolean==1);
    do
    {
        printf("ingresar letra: ");
        fflush(stdin);
        scanf("%c",&letra);
        switch (letra)
        {
        case 'p': case 'P':
            boolean=0;
            printf("numeros pares: ");
            for (int i = num1; i <= num2; i++)
            {
                if (i%2==0)
                {
                    printf("%d, ",i);
                }
            }
            break;
        case 'i': case 'I':
            boolean=0;
            printf("numeros impares: ");
            for (int i = num1; i <= num2; i++)
            {
                if (i%2!=0)
                {
                    printf("%d, ",i);
                }
            }
            break;
        
        default:
            boolean=1;
            printf("letra ingresada no valida\n");
            break;
        }
    } while (boolean==1);
    return 0;
}