#include <stdio.h>
#include <unistd.h>
//Main recibe n cantidad de argumentos 
//Argv es un arreglo de punteros de caracteres
int main (int argc, char *argv[]){
    FILE *punteroFile;
    char caracter;
    if (argc!=2)
    {
        printf("CANTIDAD INCORRECTA DE ARGUMENTOS: SE NECESITAN 2\n");//Error
        return 1;
    }
    punteroFile = fopen(argv[1], "r");
    if (punteroFile == NULL)
    {
        printf("no se pudo abrir el archivo\n");
        return 1;
    }
    while (!feof(punteroFile))
    {
        caracter = fgetc(punteroFile);
        printf ("%c", caracter);
    }
    fclose(punteroFile);
    sleep(14);
    return 0;
}