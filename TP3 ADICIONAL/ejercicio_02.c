/* 31/05/2022
TP3 AD ejercicio_02: En un certamen automovilístico, compiten 45 autos. 
Al finalizar la vuelta de clasificación, se van registrando los tiempos de cada auto. 
Desarrollar un algoritmo que simule dicho registro y muestre por pantalla la siguiente información:
a.	El número de auto que llegó primero.
b.	El número de auto que llegó último.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    const int cantAutos = 45;
    int prim,ult;
    float tiempo,tiempoPrim,tiempoUlt;
    for (int i = 1; i <= cantAutos; i++)
    {
        printf("registro del %d auto\n",i);
        printf("ingresar tiempo de llegada: ");
        scanf("%f",&tiempo);
        if(i==1){
            prim=i;
            ult=i;
            tiempoPrim=tiempo;
            tiempoUlt=tiempo;
        }else if (tiempoPrim>tiempo){
            tiempoPrim=tiempo;
            prim=i;
        }else if (tiempoUlt<tiempo){
            tiempoUlt=tiempo;
            ult=i;
        }
    }
    printf("el auto %d llego primero\n",prim);
    printf("el auto %d llego ultimo",ult);
    return 0;
}