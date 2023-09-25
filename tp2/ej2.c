#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arrayRandNum[10][10]; // Matriz para almacenar 10 arrays de 10 números cada uno
    
    int i, j, k;

    // Inicializa la semilla del generador de números aleatorios con el tiempo actual
    srand(time(NULL));

    // Genera los 10 arrays y calcula la frecuencia de cada número
    int frecuencia[10] = {0}; // Inicializa todas las frecuencias a cero

    /*Repite el proceso de armar el array y ontar la frecuencia de cada num 10 veces*/
    for (k = 0; k < 10; k++) {
        // Genera 10 números aleatorios entre 0 y 9 y los almacena en el array actual
        for (i = 0; i < 10; i++) {
            arrayRandNum[k][i] = rand() % 10;
        }

        // Calcula la frecuencia de cada número en el array actual y actualiza la frecuencia global
        for (i = 0; i < 10; i++) {
            frecuencia[arrayRandNum[k][i]]++;
        }
    }

    // Imprime la frecuencia global de cada número
    printf("Frecuencia global de cada número en los 10 arrays:\n");
    for (i = 0; i < 10; i++) {
        printf("%d aparece %d veces en total.\n", i, frecuencia[i]);
    }

    return 0;
}
