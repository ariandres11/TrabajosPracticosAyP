//Escribir un programa que permita ingresar un numero entero N e indique si el numero es capicua
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int capi(int numero,int n1);

int main (){
    int n, numeron,numint;
    char num[20];

    printf("Ingrese un numero y el programa le dira si es capicua\n");
    scanf("%d",&n);
    sprintf(num, "%d", n);
    numint = atoi(num);
    capi(numint,n);


    return 0;
}
int capi(int numero,int n1){
        if (numero ==  n1)
    {
        printf("El numero es capicua");
    }else{
        printf("El numero no es capicua");
    }
    return 0;

}
