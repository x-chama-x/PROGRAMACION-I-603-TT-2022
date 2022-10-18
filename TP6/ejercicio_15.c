/* 18/10/2022
TP6 ejercicio_15: Desarrollar un algoritmo que cargue una matriz que representa la notas de un
alumno determinado teniendo en cuenta que las filas representan las materias y las
columnas los trimestres:
(tomar la siguiente tabla como ejemplo)

        Matemática Lengua Inglés Geografía Biología
Trim 1      10      2       6       6         6
Trim 2      4       2       8       9         6
Trim 3      5       3       2       9         7

Se pide:
Cargar la matriz y el nombre y apellido del alumno y luego informar: Nombre
completo del alumno y el siguiente reporte:
    a. Promedio en cada una de las materias
    b. Porcentaje de materias aprobadas por trimestres (nota >6).
    c. Promedio general.

programa hecho por x_chama_x */
#include <stdio.h>
void promedio(int [3][5]);
void materiasAprobadas(int [3][5]);
void promedioGeneral(int [3][5]);
int main ()
{
    int notas[3][5] = {10,2,6,6,6,4,2,8,9,6,5,3,2,9,7};
    char nombre[] = "Francisco";
    promedio(notas); //a.
    materiasAprobadas(notas); //b.
    promedioGeneral(notas); //c.
    return 0;
}

void promedio (int m[3][5])
{
    float pMAT= (float) (m[0][0]+m[1][0]+m[2][0])/3;
    printf("prom. matematica: %.1f",pMAT);
    float pLEN= (float) (m[0][1]+m[1][1]+m[2][1])/3;
    printf("\nprom. lengua: %.1f",pLEN);
    float pING= (float) (m[0][2]+m[1][2]+m[2][2])/3;
    printf("\nprom. ingles: %.1f",pING);
    float pGEO= (float) (m[0][3]+m[1][3]+m[2][3])/3;
    printf("\nprom. geografia: %.1f",pGEO);
    float pBIO= (float) (m[0][4]+m[1][4]+m[2][4])/3;
    printf("\nprom. biologia: %.1f",pBIO);
}

void materiasAprobadas(int m[3][5])
{
    int primTRIM=0,segTRIM=0,terTRIM=0; // contadores de materias aprobadas en cada trimestre
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j]>6)
            {
                primTRIM=primTRIM+1;
            }
        }
    }
    primTRIM=(primTRIM*100)/5;
    printf("\n %% de materias aprobadas en primer. trim: %d%%",primTRIM);
    
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j]>6)
            {
                segTRIM=segTRIM+1;
            }
        }
    }
    segTRIM=(segTRIM*100)/5;
    printf("\n %% de materias aprobadas en segundo. trim: %d%%",segTRIM);
    
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j]>6)
            {
                terTRIM=terTRIM+1;
            }
        }
    }
    terTRIM=(terTRIM*100)/5;
    printf("\n %% de materias aprobadas en tercer. trim: %d%%",terTRIM);
}

void promedioGeneral(int m[3][5])
{
    int suma=0; float prom=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            suma=suma+m[i][j];
        }
    }
    prom= (float)suma/15;
    printf("\npromedio general: %.1f",prom);
}