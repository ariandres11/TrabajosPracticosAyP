#include <stdio.h>

void LeerNumeros(int *NumeroA, int *NumeroB);
int SumaNumeros(int numA, int numB);

int main (){
    int numA, numB, Resultado;
    LeerNumeros(&numA, &numB);
    printf("El resultado es :  %d\n",SumaNumeros(numA, numB));
    return 0;
}

void LeerNumeros(int *NumeroA, int *NumeroB){
    printf("Ingrese un numero\n");
    scanf("%d",NumeroA); //Aca no va & porque ya sabe el valor de la direccion de memoria;
    printf("Ingrese otro numero\n");
    scanf("%d",NumeroB);
}

int SumaNumeros(int numA, int numB){
    int res = numA+numB;
    
    return res;
}
