#include <stdio.h>
#include <stdlib.h>

main()
    {
        int numero1;
        int numero2;
        int resultado;
        float division;
        long multiplicacion;
        int resta;

        printf("Introduzca el primer numero\n");
        scanf("%d",&numero1);
        printf("Introduzca el segundo numero\n");
        scanf("%d",&numero2);
        resultado = numero1+numero2;
        printf("La suma es: %d\n",resultado);
        division= (float) numero1/numero2;
        printf("La division es:  %.3f\n", division);
        multiplicacion= (long)numero1*numero2;
        printf("La multiplicacion es;  %d\n", multiplicacion);
        resta = numero1-numero2;
        printf("La resta es: %d",resta);

        return 0;
    }
    /* esto es parte de lo que hizo el profesor en clase...

    if(sumaEnteros(numero1,numero2,&resultadoMain)==0)
    int sumaEnteros(int numero1, int numero2, float *resultado)
    {
        long resultadoCalculo;
        int retorno = -2:
            resultadoCalculo = numero1 + numero2;
            if(resultadoCalculo < 32767)
            {
                *resultado = resultadoCalculo;
                retorno=0;
            }
            return retorno;
    }

    if(sumaEnteros(int numero1, int numero2, float *resultado))==0;

*/

