/* 06/05/2022
TP1 ejercicio_10: Determina la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus
dos catetos (tener en cuenta libreria math.h).
programa hecho por x_chama_x */

#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c;
    printf("ingresar cateto a: ");
    scanf("%f",&a);
    printf("ingresar cateto b: ");
    scanf("%f",&b);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("hipotenusa=%f",c);
    return 0;
}
