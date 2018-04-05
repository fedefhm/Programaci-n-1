int getInt(char* mensaje, char* mensajeError,int reintentos, int minimo,int maximo, int* resultado)
{
    int retorno = -1; /// retorna 0 si està ok, y -1 si hay error.
    long auxiliarLong;
    do {
            reintentos--;
            printf("%s",mensaje);
            scanf("%ld",&auxiliarLong);
            if(auxiliarLong>=minimo && auxiliarLong<= maximo)
            {
                *resultado = (int)auxiliarLong;
                retorno = 0;
                break;
            }
            printf("%s",mensajeError);
        } while(reintentos>=0);
        return retorno;

}


float getFloat(char* mensaje, char* mensajeError,int reintentos, float minimo,float maximo, float* resultado)
{
    int retorno = -1; /// retorna 0 si està ok, y -1 si hay error.
    double auxiliarDouble;
    do {
            reintentos--;
            printf("%s",mensaje);
            scanf("%ld",&auxiliarDouble);
            if(auxiliarDouble>=minimo && auxiliarDouble<= maximo)
            {
                *resultado = (float)auxiliarDouble;
                retorno = 0;
                break;
            }
            printf("%s",mensajeError);
        } while(reintentos>=0);
        return retorno;

}
