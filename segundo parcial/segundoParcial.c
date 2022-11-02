/* 21/10/2022
segundo parcial:
programa hecho por x_chama_x */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define partidos 4 // cantidad de partidos a jugar

typedef struct // punto 2 del parcial
{
    int numeroEquipo;
    int puntos;
}datos;

void cargarGoles(int [4][4]);
void cantGoles(int [4][4]); // punto 1 del parcial
void puntuacion(int [4][4],datos[]); // punto 2 del parcial
int main()
{
    int tabla [4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 
    datos fixture[partidos*2]; // punto 2 del parcial 
    cargarGoles(tabla);
    cantGoles(tabla);
    //puntuacion(tabla,fixture);
    
    return 0;
}

void cargarGoles(int t[4][4])
{
    int c1,c2;
    //system("cls");
    for (int i = 1; i <= partidos; i++)
    {
        system("cls");
        printf("-----------------------------------");
        printf("\nRiver --> 0");
        printf("\nRacing --> 1");
        printf("\nBoca --> 2");
        printf("\nIndependiente --> 3\n");
        printf("-----------------------------------\n"); 
        printf("ingrese club 1 del partido %d: ",i);
        scanf("%d",&c1);
        printf("ingrese club 2 del partido %d: ",i);
        scanf("%d",&c2);
        if (c1==c2)
        {
            printf("se ha ingresado el mismo equipo 2 veces\n");
            for (int retardo = 0; retardo < 1500000000; retardo++){} // retardo 
            system("cls");
            i=i-1;
        }else
        {
            printf("ingrese cantidad de goles del club 1: ");
            scanf("%d",&t[c1][c2]);
            printf("ingrese cantidad de goles del club 2: ");
            scanf("%d",&t[c2][c1]);
        }
    }
}

void cantGoles(int t[4][4])
{
    int golesTotales[4]={0,0,0,0}; // goles totales de cada equipo --> River,Racing,Boca,Independiente
    char nombreEquipo[4][20] = {"River","Racing","Boca","Independiente"};
    char auxNombre [20];
    int aux;
    int n = 4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            golesTotales[i]=golesTotales[i]+t[i][j];
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            if (strcmp(nombreEquipo[j],nombreEquipo[j+1])>0)
            {
                strcpy(auxNombre,nombreEquipo[j]);
                strcpy(nombreEquipo[j],nombreEquipo[j+1]);
                strcpy(nombreEquipo[j+1],auxNombre);
                aux=golesTotales[j];
                golesTotales[j]=golesTotales[j+1];
                golesTotales[j+1]=aux;
            }
        }
    }

    // mostrar nombre de equipo y cant de goles ordneado alfabeticamente
    for (int i = 0; i < 4; i++)
    {
        printf("\nnombre equipo: %s",nombreEquipo[i]);
        printf("\ncantidad de goles: %d",golesTotales[i]);
    }
    
}

void puntuacion(int t[4][4],datos e[])
{
        for (int i = 0; i < 4; i++)
        {
        
            for (int j = 0; j < 4; j++)
            {
                if (t[i][j]==t[j][i])
                {
                    e[i].puntos=1;
                }else if (t[i][j]>t[j][i])
                {
                    e[i].puntos=3;
                }else if (t[i][j]<t[j][i])
                {
                    e[i].puntos=0;
                }
            }
            
        }
        
    
}

