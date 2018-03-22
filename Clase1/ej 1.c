#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int resultado;
    char respuesta;

    do
    {
        printf("Dame el primer numero\n");//el barra alrevés es alt92 o altgr y el de al lado del 1. Es para salto de linea el barra+n
        scanf("%d",&numero1);
        printf("Dame el segundo numero\n");
        scanf("%d",&numero2);
        if(numero1>0 && numero2>0)
            {
                resultado=numero1+numero2;
                printf("El resultado es: %d",resultado);
            }
                else
                    {
                        printf("Es imposible hacer la cuenta");

                        scanf("%c",respuesta);
                    }

        printf("\n¿Desea ingresar otros numeros?");
        fflush(stdin);
        scanf("%c",&respuesta);


    }

        while(respuesta=='s');


    return 0;
}
