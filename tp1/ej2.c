
#include <stdio.h>

int main() {
    char*nombre;
     printf("Cual es tu nombre? \n"); 
     scanf("%[^\n]s",nombre);
     printf("Hola %s\n");
    return 0;
}