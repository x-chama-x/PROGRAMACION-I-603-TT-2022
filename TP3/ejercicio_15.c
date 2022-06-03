/* 03/06/2022
TP3 ejercicio_15: Se realizó un concurso de tiro al blanco. 
Existen 5 participantes y cada uno de ellos efectúa 10 disparos, 
registrando las coordenadas (x, y) de cada disparo.

Se pide, Informar de cada participante:

a) Cantidad de disparos que se produjeron en cada cuadrante, 
b) Cantidad de disparos que dieron en el blanco,
c) Cantidad de disparos sobre cada eje.
d) Informar el nro. de participante vencedor, teniendo en cuenta 
que fue el que más veces dio en el blanco. Considere un único ganador. 
Si ninguno dio en el blanco indicar con un mensaje, "No existe vencedor"

Mostrar los resultados parciales de la siguiente forma

Resumen desempeño del Participante 1
En el banco Sobre el eje    C1  C2  C3  C4
    2           0           3   0   0   0
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    int x,y;
    int cuad1=0,cuad2=0,cuad3=0,cuad4=0,blanco=0,sobreElEje=0;
    int ganador,cantMaxBlanco=0;
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
            }else if (((x!=0)&&(y==0))||((x==0)&&(y!=0))){
                sobreElEje=sobreElEje+1;
            }
        }
        if(blanco>cantMaxBlanco){
            cantMaxBlanco=blanco;
            ganador=i;
        }
        printf("Resumen desempeno del participante %d",i);
        printf("\nEn el blanco     Sobre el eje   C1  C2  C3  C4\n");
        printf("%5d %18d %9d %2d %3d %3d",blanco,sobreElEje,cuad1,cuad2,cuad3,cuad4);
        printf("\n");
        cuad1=0;
        cuad2=0;
        cuad3=0;
        cuad4=0;
        blanco=0;
        sobreElEje=0;
    }
        if (ganador!=0)
        {
            printf("\nEl participante %d es el ganador con %d aciertos",ganador,cantMaxBlanco);
        }else{
            printf("no existe vencedor");
        }
    return 0;
}   