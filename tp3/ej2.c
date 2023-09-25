/*Consigna:Ejercicio 2. Modificá el programa del ejercicio anterior para que use una función que reciba el ingreso por teclado del usuario y devuelva un arreglo de caracteres que represente el nombre.
char[] ingresarNombre(); o ingresarNombre(char *nombre);*/

#include <stdio.h>
#include <unistd.h>

void imprimir_saludo (char* nombre);//
char *cargar_nombre(char*cargar_nombre);//
int main (){
    char nombre[100];
    imprimir_saludo((cargar_nombre(nombre)));
    sleep(10);
return 0;
}


void imprimir_saludo(char *nombre){
    printf ("Hola, %s", nombre);
}
char *cargar_nombre(char*nombre){
    printf("Bienvenido, ingresa tu nombre \n");
    scanf(" %[^\n]s",nombre);
    return nombre;
}


