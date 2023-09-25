#include <stdio.h>
#include <unistd.h>

void imprimir_saludo (char* nombre);
int main (){
    char nombre[100];
    printf("Bienvenido, ingresa tu nombre \n");
    scanf(" %[^\n]s",nombre);
    imprimir_saludo(nombre);
    sleep(10);
return 0;
}


void imprimir_saludo(char *name){
    printf ("Hola, %s", name);
}