#include <stdio.h>
#include <stdlib.h>
/* array= arreglo de datos ORDENADO. vARIABLE QUE TIENE un conjunto de variables en su interior (ordenadas)
definicion int c;                   |  int  NOSE[5];
c=28 escribo la variable;           |  NOSE [3] posición 4 (porque empieza de cero). Toma el valor que hay ahì
k=c lectura                         |  k = NOSE [3] leo en k el valor del array en la posición 3

tipo  nombre [cantidad de elementos]. El tamaño es fijo, no crece ni se achica (durante la ejecuciòn del código)


// Programa que pida 5 numeros al usuario y calcule el promedio; pero con array.

    1) pedir numeros y guardar
    2) recorrer el array y promediar.
*/
#define SIZE_ARRAY 6 // ESTO LO DEFINO PORQUE SI CAMBIO EL VALOR, AUTOMATICAMENTE ME LO CAMBIA ABAJO SIN TENER QUE CAMBIARLO CADA VEZ

int main()
{
    int numero[SIZE_ARRAY];
    float promedio;
    int i;
    int suma=0;

    for(i=0; i<SIZE_ARRAY;i++) // este ciclo guarda los valores a ingresar en el vector.
    {
        printf("Ingrese un numero \n");
        scanf("%d",&numero[i]);
    }
    for (i=0;i<SIZE_ARRAY;i++) // este ciclo, recorre el vector y suma cada uno de los números ingresados en c/ posición
    {
        suma= suma+numero[i];
    }
    promedio= (float) suma/SIZE_ARRAY; // finalmente calculo el promedio.
    printf("El promedio es %.2f", promedio);
    return 0;
}
