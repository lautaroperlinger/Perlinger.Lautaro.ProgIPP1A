#include <stdio.h>
#include <stdlib.h>


float aplicarDescuento(float precio);
int main()
{
    float numero;
    float numero_2;
    printf("ingrese precio: \n");
    scanf("%f",&numero);
    numero_2=aplicarDescuento(numero);
    printf("el precio con descuento es: %.2f\n",numero_2);

    return 0;
}
float aplicarDescuento(float precio)
{
    float respuesta;
    respuesta=precio*0.05;

    return respuesta;
}
