/* 24/06/2022
actividad_01: Una empresa elaboradora de desinfectantes incrementa sus ventas
debido al covid. 
En cada factura de venta se requisita: (INGRESO DE DATOS)
    a) N° de factura
    b) N° de articulo (son 4) (Validar con una función)
    c) Cantidad --> 
    d) Precio unitario (x litro) --> IMPORTE
El ingreso de datos finaliza con N° de factura igual a cero
Se pide:
    a) Facturacion total. Crear una funcion para calcular el importe
    b) Indicar cuanto se vendió del articulo 1 (en litros) --> Pide cantidad
    c) Cuantas facturas de más de $3000 se emitieron?
    d) Porcetaje de ganancia que corresponde al 20% del total facturado. Crear
    una funcion para este porcentaje.
programa hecho por x_chama_x */

#include <stdio.h>
int validArt(int);
int validarDatos(float);
float importe (float,float);
float porcentaje (float); // punto d)
int main (){
    int factura,art; // factura,articulo
    float cant,precioUn; // cantidad,precioUn
    float factTotal=0,totVendArt1=0; // facturacion total, Total vendido de articulo 1
    int cant3000=0; // cantidad de facturas de más de $3000
    do
    {
        printf("ingresar 0 --> fin datos\n");
        printf("ingresar n de factura: ");
        scanf("%d",&factura);
        if (factura != 0)
        {
            do
            {
                printf("ingresar n de articulo: ");
                scanf("%d",&art);
            } while (validArt(art)==-1);
            do
            {
                printf("ingresar cantidad en litros: ");
                scanf("%f",&cant);
            } while (validarDatos(cant)==-1);
            do
            {
                printf("ingresar precio unitario en pesos: ");
                scanf("%f",&precioUn);
            } while (validarDatos(precioUn)==-1);

            factTotal=factTotal+importe(precioUn,cant); // Acumulación de Factura Total.
            if(importe(precioUn,cant)>3000){
                cant3000=cant3000+1;
            }
            if (art==1)
            {
                totVendArt1=totVendArt1+cant;
            }
        }
        

    } while (factura != 0);
    printf("Factura Total: $%.2f\n",factTotal);
    printf("cant vendida del articulo 1: %.2f litros\n",totVendArt1);
    printf("se emitieron %d facturas de mas de $3000\n",cant3000);
    printf("20%% del total facturado: %.2f",porcentaje (factTotal));
    return 0;
}

int validArt(int x){ // validar N° de articulo
    switch (x)
    {
    case 1: 
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        return 3;
        break;
    case 4:
        return 4;
        break;
    default:
        printf("articulo ingresado inexistente\n");
        return -1;
        break;
    }
}

int validarDatos(float x){ // Valida que los datos ing sean positivos
    if (x<0)
    {
        printf("dato ingresado no valido\n");
        return -1;
    }else{
        return 1;
    }
}

float importe (float x,float y){  // Calculo del importe (precio Unitario * Cantidad)
    return x*y;
}

float porcentaje (float x){
    float porcenTotFact;
    porcenTotFact=(20*x)/100;
    return porcenTotFact;
}
