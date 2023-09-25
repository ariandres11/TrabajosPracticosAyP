#include <stdio.h>

int main() {
    int anio, edad;
     printf("Cual es tu anio de nacimiento? \n"); 
     scanf("%d",&anio);
     edad = 2023 - anio;
     printf("Tu edad aproximada es %d\n", edad);
    return 0;
}