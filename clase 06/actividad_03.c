/* 12/06/2022
actividad_03: Desarrollar una funcion que 
indique si dos numeros naturales son amigos

programa hecho por x_chama_x */

#include <stdio.h>
int amigos (int,int);
int main (){
    int num1,num2;
    printf("ingresar primer numero natural: ");
    scanf("%d",&num1);
    printf("ingresar segundo numero natural: ");
    scanf("%d",&num2);
    if (amigos (num1,num2)==1)
    {
        printf("%d y %d son amigos\n",num1,num2);
    }else if (amigos (num1,num2)==0) {
        printf("%d y %d no son amigos\n",num1,num2);
    }
    
    return 0;
}
int amigos (int x,int y){
    int sumDivx=0,sumDivy=0; 
    for (int i = 1; i <= x; i++)
    {
        if(x%i==0){
            sumDivx=sumDivx+i;
        }
    }
    for (int j = 1; j <= y; j++)
    {
        if(y%j==0){
            sumDivy=sumDivy+j;
        }
    }
    if (sumDivx==sumDivy)
    {
        return 1;
    }else{
        return 0;
    }
}