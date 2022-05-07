/* 05/05/2022
TP1 ejercicio_09: Dado un número entero de tres cifras mostrar sus cifras por separado.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int num,centena,decena,unidad;
    printf("ingresar un numero entero de tres cifras: ");
    scanf("%d",&num);
    unidad=num%10;
    printf("dado el numero %d\n",num);
    num=num/10;
    decena=num%10;
    centena=num/10;
    printf("centena: %d\n",centena);
    printf("decena: %d\n",decena);
    printf("unidad: %d",unidad);
    return 0;
}