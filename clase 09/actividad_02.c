/* 23/09/2022
actividad_02: ingresar "x" e "y" y realizar el calculo de la potencia recursivamente
programa hecho por x_chama_x */
#include <stdio.h>
int potencia (int,int);
int main (){
    int x,y;
    printf("ingresar un valor entero x: ");
    scanf("%d",&x);
    printf("ingresar un valor entero y: ");
    scanf("%d",&y);
    printf("%d elevado a %d = %d",x,y,potencia (x,y));
    return 0;
}

int potencia(int a,int b){
    if (b==0)
    {
       return 1;
    }else{
       return a*potencia(a,b-1);
    }
}