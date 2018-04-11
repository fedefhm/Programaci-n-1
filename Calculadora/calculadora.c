#include <stdio.h>
#include <stdlib.h>

void menu()
 {
  printf ("Bienvenido a la calculadora\n");
  printf("�Cual de estas operaciones te gustaria realizar?:\n\n");
  printf ("1.- Sumar\n");
  printf ("2.- Restar\n");
  printf ("3.- Dividir\n");
  printf ("4.- Multiplicar\n");
  printf ("5.- Calcular el Factorial\n");
  printf ("6.- Calcular todas las operaciones\n");
  printf ("0.- Salir\n");
  printf ("Opcion: ");
}


/**
*\ brief Recibe dos n�meros ingresados por el usuario y los suma.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la suma entre los dos n�meros ingresados.
*/

float sumar (float a, float b)
{
    float resultado;
    resultado = a + b;
    return resultado;
}

/**
*\ brief Recibe dos n�meros ingresados por el usuario y los resta.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la resta entre los dos n�meros ingresados.
*/

float restar (float a, float b)
{
    float resultado;
    resultado = a - b;
    return resultado;
}

/**
*\ brief Recibe dos n�meros ingresados por el usuario y los multiplica.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la multiplica entre los dos n�meros ingresados.
*/

float multiplicar (float a, float b)
{
    float resultado;
    resultado = a * b;
    return resultado;
}

/**
*\ brief Recibe dos n�meros ingresados por el usuario y los divide.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la divisi�n entre los dos n�meros ingresados.
*\ IMPORTANTE: el segundo n�mero a ingresar (divisor) NO PUEDE SER CERO.
*/

float dividir (float a, float b)
{
    float resultado;
    resultado = a / b;
    return resultado;

}

/**
*\ brief Recibe UN S�LO n�mero ingresado por el usuario y calcula su factorial.
*\ param El n�mero ingresado por el usuario.
*\ return El resultado del c�lculo del factorial del n�mero ingresado.
*\ IMPORTANTE: Por definici�n:
                              * Factorial(0)=Factorial(1)= 1.
                              * No Existe factorial de n�meros negativos.
*/

long factorial (long a)
{
    long resp;
    resp=a*factorial(a-1);
    return resp;
}

