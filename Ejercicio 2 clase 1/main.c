#include <stdio.h>
#include <stdlib.h>

// puedo declarar #include CANTIDAD_NUMEROS 5 y luego adentro, hago que contador< CANTIDAD_NUMEROS.
//Esto hace que si a CANTIDAD_NUMEROS le doy otro valor distinto a 5, me lo cambia en el ciclo for automáticamente.
// pedir 5 numeros al usuario e informar el promedio
int main()
{
    int numero;
    int contador=0;
    int acumulador=0;
    float promedio;
    for(contador=0;contador<5;contador++)
    {
        printf("Ingrese numero %d\n",contador+1);//con esto me pide el número 1, luego 2,...etc.
        scanf("%d",&numero);// el "&" va en el "scanf" nada mas
        acumulador=acumulador+numero;

    }
        promedio=(float)acumulador/contador;//le pongo el float adelante porque como ambos son enteros, el promedio es entero.
        // si pongo acumulador/ 5.0; toma que uno es float y hace bien el promedio. si lo pongo "5", toma que los dos valores son enteros y el promedio da mal.
        printf("El promedio es: %.2f\n",promedio);//el .2 luego del % es para que to,e 2 decimales.

    return 0;
}
