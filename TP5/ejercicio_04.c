/* 29/09/2022
TP5 ejercicio_04: Diseñar una función void que reciba como parámetro una fecha 
como tres enteros(dia,mes,anio) y devuelva la fecha correspondiente al día siguiente.
programa hecho por x_chama_x */

#include <stdio.h>
void diaSiguiente (int *,int *,int*);
int main(){
    int dia,mes,anio;
    printf("ingresar dia: ");
    scanf("%d",&dia);
    printf("ingresar mes: ");
    scanf("%d",&mes);
    printf("ingresar anio: ");
    scanf("%d",&anio);
    printf("el dia siguiente a fecha %d/%d/%d es: ",dia,mes,anio);
    diaSiguiente(&dia,&mes,&anio);
    printf("%d/%d/%d",dia,mes,anio);
    return 0;
}

void diaSiguiente (int *d,int *m,int*a){
    switch (*m)
    {
    case 1: case 3: case 5: case 8: case 10: case 12:
        if ((*d==31)&&(*m!=12))
        {
            *m=*m+1;
            *d=1;
        }else if (*d==30)
        {
            *d=*d+1;
        }else if ((*m==12)&&(*d==31))
        {
            *m=1;
            *d=1;
        }else{
            *d=*d+1;
        }
        break;
    case 4: case 6: case 7: case 9: case 11:
        if (*d==30)
        {
            *d=1;
            *m=*m+1;
        }else{
            *d=*d+1;
        }
        break;
    case 2:
        if (*d==28)
        {
            *d=1;
            *m=*m+1;
        }
        break;
    }
}