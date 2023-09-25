#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Necesitas incluir esta biblioteca para usar 'bool' y 'true'.

int main() {
    int arrayRandNum[10];
    int i, j;
    bool repetido;

    // Inicializa la semilla del generador de números aleatorios con el tiempo actual
    srand(time(NULL));

    // Genera 10 números aleatorios entre 0 y 9 y los almacena en el array
    for (i = 0; i < 10; i++) {
        arrayRandNum[i] = rand() % 10;
    }

    // Imprime los números aleatorios generados
    printf("Numeros aleatorios originales:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", arrayRandNum[i]);
    }

    // Elimina los números repetidos
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arrayRandNum[i] == arrayRandNum[j]) {
                repetido = true; // Marca como repetido
                do {
                    arrayRandNum[j] = rand() % 10; // Cambia el número repetido
                    // Verifica si el nuevo número también está repetido
                    repetido = false;
                    for (int k = 0; k < 10; k++) {
                        if (k != j && arrayRandNum[k] == arrayRandNum[j]) {
                            repetido = true;
                            break;
                        }
                    }
                } while (repetido);
            }
        }
    }

    // Imprime los números aleatorios después de eliminar los repetidos
    printf("\nNumeros aleatorios despues de eliminar los repetidos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", arrayRandNum[i]);
    }

    return 0;
}
