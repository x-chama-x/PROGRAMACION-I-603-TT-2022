/* 27/05/2022
TP3 ejercicio_14: Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos 
efectúa 10 disparos, registrando las coordenadas (x, y) de cada disparo. 
Indicar cuántos disparos se produjeron en cada cuadrante y cuantos dieron en el blanco.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int x,y;
    int cuad1=0,cuad2=0,cuad3=0,cuad4=0,blanco=0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d disparo del %d participante:\n",j,i);
            printf("registrar coordenada x: ");
            scanf("%d",&x);
            printf("registrar coordenada y: ");
            scanf("%d",&y);
            if ((x>0)&&(y>0))
            {
                cuad1=cuad1+1;
            }else if ((x<0)&&(y>0))
            {
                cuad2=cuad2+1;
            }else if ((x<0)&&(y<0))
            {
                cuad3=cuad3+1;
            }else if ((x>0)&&(y<0))
            {
                cuad4=cuad4+1;
            }else if ((x==0)&&(y==0)){
                blanco=blanco+1;
            }
        } 
    }
    printf("en el cuadrante 1 se produjeros %d disparos\n",cuad1);
    printf("en el cuadrante 2 se produjeros %d disparos\n",cuad2);
    printf("en el cuadrante 3 se produjeros %d disparos\n",cuad3);
    printf("en el cuadrante 4 se produjeros %d disparos\n",cuad4);
    printf("en el blanco se produjeros %d disparos\n",blanco);
    return 0;
}