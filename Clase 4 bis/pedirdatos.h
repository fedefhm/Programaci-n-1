#include <stdio.h>
#include <stdlib.h>

/// el .h lleva los prototipos (cabecera de funciòn)

int getInt(char* mensaje, char* mensajeError,int reintentos, int minimo,int maximo, int* resultado);
float getFloat(char* mensaje, char* mensajeError,int reintentos, float minimo,float maximo, float* resultado);
