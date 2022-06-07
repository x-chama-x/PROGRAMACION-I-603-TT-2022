/* 01/05/2022
TP3 AD ejercicio_04: 4.	Un programa de televisión realiza un concurso donde 
los televidentes deben llamar diciendo cual es la altura del Monte Everest.
Por cada llamada recibida se registra: DNI, zona (‘C’: Caba, ‘G’: Gran Bs. As., ‘R’: resto del país) y 
por último respuesta del participante. El ingreso de datos termina con DNI=999. 
Sabiendo que la altura del Monte Everest es de 8848 metros, se pide informar:
a.	Porcentaje de respuestas correctas.
b.	Cantidad de llamadas de cada zona.
c.	Zona de la que se recibió más llamadas.
d.	Datos del televidente que ganó, considerando que fue el primero que dio la respuesta correcta.
programa hecho por x_chama_x */

#include <stdio.h>
int main (){
    const int monteEverest = 8848;
    int DNI,altura,cont=0; // contador de participantes
    int contC=0,contG=0,contR=0; // contadores de zona 
    int contRes=0; // contador de aciertos
    char zona,ganadorZona;
    int ganadorDNI;
    do
    {
        printf("ingresar DNI del participante: ");
        scanf("%d",&DNI);
        if (DNI!=999)
        {
            cont=cont+1;
            printf("ingresar zona: ");
            fflush(stdin);
            scanf("%c",&zona);
            fflush(stdin);
            switch (zona)
            {
            case 'C': // Caba
                contC=contC+1;
                break;
            case 'G': // Gran Bs. As
                contG=contG+1;
                break;
            case 'R':
                contR=contR+1; // resto del país
                break;
            }
            printf("ingresar altura del Monte Everest: ");
            scanf("%d",&altura);
            if (altura==monteEverest)
            {
                contRes=contRes+1;
                if(contRes==1){
                    ganadorDNI=DNI;
                    ganadorZona=zona;
                }
            }
        }
    } while (DNI != 999);
    printf("\nporcentaje de respuestas correctas: %d%%\n",(contRes*100)/cont);
    printf("cantidad de llamadas de Caba: %d\n",contC);
    printf("cantidad de llamadas del Gran Bs. As: %d\n",contG);
    printf("cantidad de llamadas del resto del pais: %d\n",contR);
    if ((contC>contG)&&(contC>contR))
    {
        printf("se recivieron mas llamadas de la zona de Caba\n");
    }else if ((contG>contC)&&(contG>contR))
    {
        printf("se recivieron mas llamadas de la zona del Gran Bs. As\n");
    }else if ((contR>contC)&&(contR>contG)) 
    {
        printf("se recibieron mas llamadas del resto del pais\n");
    }
    printf("televidente ganador DNI: %d\n",ganadorDNI);
    switch (ganadorZona)
    {
    case 'C': // Caba
        printf("zona: Caba");
        break;
    case 'G': // Gran Bs. As
        printf("zona: Gran Bs. As");
        break;
    case 'R': // resto del país
        printf("zona: resto del pais");
        break;
    }
    return 0;
}
