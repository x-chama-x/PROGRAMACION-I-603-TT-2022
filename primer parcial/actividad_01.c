/* 01/07/2022
actividad_01: 
programa hecho por x_chama_x */

#include <stdio.h>
float reaccionCTES (int,int);
int main (){
    int pi,pf;
    int diferencia,difMasBajo; // el que tiene mas diferencia es el mas bajo
    int NumReacMasBajo;
    int contReaccionCTE=0; // contador de reacciones ctes
    const int tope = 1000; // cantidad de reacciones simuladas
    for (int i = 1; i <= tope; i++) // i es el num de reaccion
    {
        printf("num reaccion: %d\n",i);
        printf("ingresar pi: ");
        scanf("%d",&pi);
        printf("ingresar pf: ");
        scanf("%d",&pf);
        if (pi==pf)
        {
            contReaccionCTE=contReaccionCTE+1; //contador
        }
        
        diferencia=pf-pi;
        if (i==1)
        {
            difMasBajo=diferencia;
            NumReacMasBajo=i;
        }else if (diferencia>difMasBajo)
        {
            difMasBajo=diferencia;
            NumReacMasBajo=i;
        }
    }
    printf("diferencia que mas bajo: %d\n",difMasBajo);
    printf("en el num de reaccion: %d\n",NumReacMasBajo);
    printf("porcentaje de reacciones ctes: %.2f%%",reaccionCTES (contReaccionCTE,tope));
    
    return 0;
}

float reaccionCTES (int x,int y){
    int porcent;
    porcent=(x*100)/y;
    return porcent;
}