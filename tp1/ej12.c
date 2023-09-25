#include <stdio.h>

int fibonacci(int n);

int main() {
    int nat;
    printf("Ingrese un numero y esa va a ser la cantidad de primeros numeros de la serie de Fibonacci que se muestren\n");
    scanf("%d", &nat);
    printf("Los primeros numeros de la sucesión de Fibonacci son:");
    fibonacci(nat);
    return 0;
}

int fibonacci(int n) {
    int anterior = 0, dobleanterior = 1, nuevo;

    for (int i = 0; i < n; i++) {
        printf("%d ", anterior);
        nuevo = anterior + dobleanterior;
        anterior = dobleanterior;
        dobleanterior = nuevo;
    }
    printf("\n");
    return 0;
}


