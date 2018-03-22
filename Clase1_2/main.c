#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS 3


int main()
{
    int i;
    int numeroUsuario;
    int acumulador = 0;
    float resultado;
    int maximo;
    int minimo;
    for(i=0 ; i < CANTIDAD_NUMEROS ; i++)
    {
        printf("Dame el Numero %d\n",i+1);
        scanf("%d",&numeroUsuario);
        acumulador = acumulador + numeroUsuario;
        if(i==0 || numeroUsuario>maximo)
        {
            maximo=numeroUsuario;
        }
                if(i==0 || numeroUsuario<minimo)
        {
            minimo=numeroUsuario;
        }

    }
    resultado = (float)acumulador / CANTIDAD_NUMEROS;
    printf("Resultado %.2f\n",resultado);
    printf("Maximo: %d\n",maximo);
    printf("Minimo: %d\n",minimo);

    return 0;
}
