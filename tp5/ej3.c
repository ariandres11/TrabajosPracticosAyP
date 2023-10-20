#include <stdio.h>
#include <unistd.h>

int main()
{
    FILE *punteroFile;
    int pid;

    punteroFile = fopen("pidfile.txt", "r");
    if (punteroFile != NULL)
    {
        printf("El programa ya está ejecutandose.");
    }
    else
    {
        printf("No existe, el programa lo creara. ");
        pid = getpid();
        punteroFile = fopen("pidfile.txt", "w");
        fwrite(&pid, sizeof(pid), 1, punteroFile);
        fclose(punteroFile);
        getchar();
        if (remove("pidfile.txt") != 0)
        {
            printf("Ocurrio un error, no se pude borrar el archivo. ");
        }
        else
        {
            printf("El archivo se elimino con exito. ");
        }
    }
    
    return 0;
}