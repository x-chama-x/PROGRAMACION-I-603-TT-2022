/* 14/06/2022
TP4 ejercicio_02: Crear la siguiente función que recibe un número y retorna la suma de los dígitos.
Desarrollar un programa para generar valores al azar de 5 dígitos. Mostrar por pantalla
este número y la suma de sus dígitos utilizando la función antes descripta. Investigar
además la función rand().

// links utilizados en la investigación:
http://www.chuidiang.org/clinux/funciones/rand.php#:~:text=En%20C%2C%20para%20obtener%20n%C3%BAmeros,como%20de%202%20mil%20millones).
programa hecho por x_chama_x */

#include <stdio.h>
#include <math.h>
#include <stdlib.h> // librería de rand(); --> numeros aleatorios 
#include <unistd.h> // CORRIGE advertencia: declaración implícita de la función 'getpid'
int sumDigitos (int);
int main (){
    int num;
    srand (getpid());
    num=rand()%(99999-10000+1)+10000; //numero = rand () % (N-M+1) + M;  Este está entre M y N
    printf("numero aleatorio: %d\n",num);
    printf("la suma de sus digitos es: %d",sumDigitos(num));
    return 0;
}

int sumDigitos (int x){
    int numDigito,suma=0;
    const int numSorteado = x;
    for (int i = 0; i < (log10(numSorteado) + 1); i++)
        {
            numDigito=x%10;
            x=x/10;
            suma=suma+numDigito;
        }
    return suma;
}