#include <stdio.h>

int Potencia(int base, int exp);

int main() {
    int n1, m1;
    printf("Ingrese un numero natural n que sera la base de la potencia:\n");
    scanf("%d", &n1);
    printf("Ingrese un numero natural m que sera el exponente de la potencia:\n");
    scanf("%d", &m1);
    printf("El resultado de la potencia es %d\n", Potencia(n1, m1));
    return 0;
}

int Potencia(int base, int exp) {
    int resultado = 1;

    for (int i = 0; i < exp; i++) {
        int temp = 0;
        for (int j = 0; j < base; j++) {
            temp += resultado; // Sumar resultado 'base' veces
        }
        resultado = temp; // Actualizar resultado
    }

    return resultado;
}
