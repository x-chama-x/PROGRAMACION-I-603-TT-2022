/* 05/05/2022
TP1 ejercicio_08: Se ingresa un número entero positivo de dos o más cifras y obtener su última cifra.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num,ultCifra;
    printf("ingresar un numero entero positivo de dos o mas cifras: ");
    scanf("%d",&num);
    ultCifra=num%10;
    printf("la ultima cifra del numero %d es %d:",num,ultCifra);
    return 0;
}