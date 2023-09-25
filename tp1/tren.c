#include <stdio.h>

int main() {

    int numvagones, acumulador;

    acumulador = 0;

    printf ("Ingrese la cantidad de vagones\n");
    scanf("%d", &numvagones);

    int pasajeros[numvagones];

    for (int  i = 0; i < numvagones; i++)
    {
        printf("ingrese la cantidad de pasajeros del vagon %d\n", i+1);
        scanf("%d", &pasajeros[i]);
    }

    for (int  j = 0; j < numvagones; j++)
    {
        
        acumulador = acumulador + pasajeros[j];
    }

    printf ("La cantidad de pasajeros totales es: %d\n", acumulador);
    return 0;
    
}