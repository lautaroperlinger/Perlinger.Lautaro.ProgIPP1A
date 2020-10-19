#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char Cadena_1[],char caracter);
int main()
{
    char cadenaCaracteres[]={'s','s','s','x','x','x','a','a'};
    int cantidad;

    cantidad=contarCaracteres(cadenaCaracteres,'s');
    printf("hay %d contados.\n",cantidad);
    return 0;
}
int contarCaracteres(char Cadena_1[],char caracter)
{
    int contador;
    for(int i=0;i<strlen(Cadena_1);i++)
    {
        if(Cadena_1[i]==caracter)
        {
            contador++;
        }
    }
    return contador;
}
