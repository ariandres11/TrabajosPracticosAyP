#include <stdio.h>
#include <unistd.h>


int main(){
    FILE *punteroFile;
    char caracter;
    punteroFile = fopen(__FILE__, "r");
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
    sleep(14);
    return 0;
}