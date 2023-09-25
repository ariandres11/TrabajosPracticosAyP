#include <stdio.h>

int main() {
    char l;
    printf("Ingrese una letra y el programa imprimira todas las letras desde A hasta ella.\n");
    scanf(" %c", &l);

    if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z')) {
        printf("Es una letra. Imprimiendo letras:\n");

        char inicio = (l >= 'a' && l <= 'z') ? 'a' : 'A';
        char fin = l;

        for (char i = inicio; i <= fin; i++) {
            if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
                printf("%c ", i);
            }
        }
        printf("\n");
    } else {
        printf("No es una letra valida.\n");
    }

    return 0;
}
