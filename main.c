#include <stdio.h>
#include <stdlib.h>
#include "pedirdatos.h"

int main()
{
    int edad;
    if (getInt("Ingrese la edad\n","\n Edad valida entre [0-199]\n",1,0,199,&edad)==0)
    {
        printf("\n La edad es: %d",edad);
    }
    else
    {
     printf("Se te acabaron las posibilidades");
    }
    return 0;
}
//if(getInt("Edad?","[0-199]",2,0,199,&edad)==0)//


