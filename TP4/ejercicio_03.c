/* 16/06/2022
Extraer un dígito de un número. La función recibe como parámetros dos números
enteros uno de 5 cifras otro de 1 cifra , uno será del que se extraiga el dígito y el otro
indica qué cifra se desea obtener. La cifra de la derecha se considera la número 0
(cero). Retornar el valor -1 si no existe el dígito solicitado. En el programa principal,
mostrar por pantalla un mensaje que muestre el valor obtenido o la frase “El valor x
no existe dentro del número xxxx”.
Ejemplo: extraervalor(12385, 1) devuelve 8, y extraervalor(12345, 8) devuelve -1.
programa hecho por x_chama_x */

#include <stdio.h>
int extraervalor (int,int);
int main (){
    int num,cifraElegida,numDigito;
    printf("ingresar un numero entero de 5 cifras: ");
    scanf("%d",&num);
    printf("ingresar la cifra que se desea extraer: ");
    scanf("%d",&cifraElegida);
    numDigito = extraervalor (num,cifraElegida);
    if (numDigito!=-1)
    {
        printf("Digito extraido: %d",numDigito);
    }else{
        printf("el valor %d no existe dentro del numero %d",cifraElegida,num);
    }
    return 0;
}

int extraervalor (int x,int y){ // x=num, y=cifraElegida
    for (int i = 0; i <= 5; i++){ 
        if ((i==y)&&(i<5)) // si i>6, devuelve valor -1, sino devuelve el digito correspondiente.
        {
            return x%10;
        }else if (i<5){ // mientras i<6, se va diviendo el numero original (num)
            x=x/10;
        }else{
            return -1;
        }
    }
}