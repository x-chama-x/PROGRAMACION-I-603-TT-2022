/* 29/04/2022
actividad_2: Tres personas invierten dinero para
fundar una empresa (no necesariamente en partes iguales)
calcular que porcentaje invirtió cada uno.
programa hecho por x_chama_x */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float monto1,monto2,monto3,montoTotal;
    float porcent1,porcent2,porcent3;
    printf("ingresar el primer monto invertido: $");
    scanf ("%f",&monto1);
    printf("ingresar el segundo monto invertido: $");
    scanf ("%f",&monto2);
    printf("ingresar el tercer monto invertido: $");
    scanf ("%f",&monto3);
    montoTotal = monto1+monto2+monto3;
    porcent1 = (monto1*100)/montoTotal;
    porcent2 = (monto2*100)/montoTotal;
    porcent3 = (monto3*100)/montoTotal;
    printf("primer porcentaje: %.2f%%\n",porcent1);
    printf("segundo porcentaje: %.2f%%\n",porcent2);
    printf("tercer porcentaje: %.2f%%",porcent3);
    return 0;
}