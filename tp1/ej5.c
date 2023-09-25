#include <stdio.h>

typedef enum {
    ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO,
    JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE
} Mes;

int main() {
    int dia;
    Mes mes;

    printf("Indique su mes de nacimiento:\n");
    printf("1. Enero\n2. Febrero\n3. Marzo\n4. Abril\n5. Mayo\n6. Junio\n");
    printf("7. Julio\n8. Agosto\n9. Septiembre\n10. Octubre\n11. Noviembre\n12. Diciembre\n");
    scanf("%d", &mes);

    printf("Ingresa tu dia de nacimiento: ");
    scanf("%d", &dia);

    switch (mes-1) { //es mes-1 porque el arreglo de meses empieza en 0 :)
        case ENERO:
        case FEBRERO:
            printf("Naciste en verano");
            break;
        case MARZO:
            if (dia >= 21) {
                printf("Naciste en otonio");
            } else {
                printf("Naciste en verano");
            }
            break;
        case ABRIL:
        case MAYO:
            printf("Naciste en otonio");
            break;
        case JUNIO:
            if (dia >= 21) {
                printf("Naciste en invierno");
            } else {
                printf("Naciste en otonio");
            }
            break;
        case JULIO:
            if (dia >= 21) {
                printf("Naciste en invierno");
            } else {
                printf("Naciste en otonio");
            }
            break;
        case AGOSTO:
            printf("Naciste en invierno");
            break;
        case SEPTIEMBRE:
            if (dia >= 21) {
                printf("Naciste en primavera");
            } else {
                printf("Naciste en invierno");
            }
            break;
        case OCTUBRE:
        case NOVIEMBRE:
            printf("Naciste en primavera");
            break;
        case DICIEMBRE:
            if (dia >= 21) {
                printf("Naciste en verano");
            } else {
                printf("Naciste en primavera");
            }
            break;
        default:
            printf("Ingrese un mes válido");
    }

    return 0;
}

