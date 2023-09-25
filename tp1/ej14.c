#include <stdio.h>
#include <string.h>

int main (){
    char n[100];
    printf("Ingrese un numero y el programa le dira cuantos digitos tiene");
    scanf("%s",&n);
    printf("La cantidad de digitos del numero es %d", strlen(n));
}