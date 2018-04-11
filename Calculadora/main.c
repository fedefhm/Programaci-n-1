#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

void main()
{
  int opcion;
  float primerOperando, segundoOperando;
    do{
        menu();
        scanf("%d",&opcion);
        switch(opcion)
        {
          case 1: ///suma
            printf("\nIntroduci el primer numero ");
            scanf("%f", &primerOperando);
            printf("\nIntroduci el segundo numero: ");
            scanf("%f", &segundoOperando);
            printf("\nLa suma de %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, sumar(primerOperando, segundoOperando));
            break;
          case 2: ///resta
            printf("\nIntroduci el primer numero ");
            scanf("%f", &primerOperando);
            printf("\nIntroduci el segundo numero: ");
            scanf("%f", &segundoOperando);
            printf("\nLa resta de %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, restar(primerOperando, segundoOperando));
            break;
          case 3: ///división
            printf("\nIntroduci el primer numero ");
            scanf("%f", &primerOperando);
            printf("\nIntroduci el segundo numero: ");
            scanf("%f", &segundoOperando);
                if(segundoOperando==0)
                    {
                        printf("\nNo se puede dividir por cero\n\n");
                    }
                    else
                            {
                              printf("\nLa division entre %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, dividir(primerOperando, segundoOperando));
                            }
            break;
          case 4: /// multiplicación
            printf("\nIntroduci el primer numero: ");
            scanf("%f", &primerOperando);
            printf("\nIntroduci el segundo numero: ");
            scanf("%f", &segundoOperando);
            printf("\nEl producto de %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, multiplicar(primerOperando, segundoOperando));
            break;
          /*case 5: /// factorial
            printf("\nIntroduci el numero del que queres tener el factorial: ");
            scanf("%f", &primerOperando);
                if(primerOperando<0)
                {
                   printf("Error de definicion: SOLO numeros mayores o iguales a cero");
                }
                if(primerOperando>1)
                {



                } else
                    {
                        printf("El factorial vale 1");
                    }

            printf("El factorial de %.3f es: %.3f\n\n", primerOperando, factorial(primerOperando));
            break;
            */
          case 6: /// todas las operaciones
            printf("\nIntroduci el primer numero: ");
            scanf("%f", &primerOperando);
            printf("\nIntroduci el segundo numero: ");
            scanf("%f", &segundoOperando);
            printf("\nLa suma de %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, sumar(primerOperando, segundoOperando));
            printf("\nLa resta de %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, restar(primerOperando, segundoOperando));
                if(segundoOperando==0)
                    {
                        printf("\nNo se puede dividir por cero\n\n");
                    }
                    else
                            {
                              printf("\nLa division entre %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, dividir(primerOperando, segundoOperando));
                            }
            printf("\nEl producto de %.3f y %.3f es: %.3f\n\n", primerOperando, segundoOperando, multiplicar(primerOperando, segundoOperando));
            break;

          case 0:
            break;
          default:
            printf("\nIntroduci una opcion valida...");
        }
  } while (opcion != 0);
    return 0;
}
