/*Escriba un programa que dado un arreglo de 10 cadenas de caracteres hardcoded lo imprima al derecho (comenzando por la cadena de la primera posición) y al revés (comenzando por la última).*/

#include <stdio.h>

int main (){
    //En este caso, letras es un arreglo de punteros a caracteres (strings) donde cada elemento apunta a una cadena que contiene un solo carácter.
    char* letras[] = {"a", "r", "i", "e", "l", "a", "n", "d", "r", "e"};
    printf("La palabra original es: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s",letras[i]);
    }
    printf("\n");
    /*Se ejecuta 5 veces proque solo hayq eu cambiar 1-8, 2-7 y asi, guarda temporalmente el valor de letras[i] en temp, temp apunta a la misma cadena que letras[i].*/
    for (int i = 0; i < 5; i++)
    {
        char*temp = letras[i];
        letras[i]= letras[9-i];
        letras[9-i]=temp;
    }
    
    printf("La palabra al reves es: \n");
    

    for (int i = 0; i < 10; i++)
    {
       printf("%s",letras[i]);
    }
return 0;   
}