//este algoritmo no distingue entre años bisisestos, duracion de meses y comparacion de dias 
#include <math.h>
#include <stdio.h>
#include <wchar.h>

int main(){
    int diaN, mesN, anioN, diaA, mesA, anioA, edad;
    printf("Por favor ingresa tu fecha de nacimiento como dd mm yyyy , gracias!\n");
    scanf("%d %d %d", &diaN, &mesN, &anioN);
    printf("Por favor ingresa la fecha actual como dd mm yyyy , gracias!\n");
    scanf("%d %d %d", &diaA, &mesA, &anioA);
    edad = anioA-anioN;
    if (mesA < mesN || (mesA == mesN && diaA < diaN))
    {
        edad--;
    }
    printf("La edad exacta es: %d anios\n", edad);

    return 0;
    
}

