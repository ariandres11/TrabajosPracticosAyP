
/*Ejercicio 4. Escriba un programa que llene un arreglo con 50 números enteros aleatorios entre 0 y 10, y calcule e imprima la moda, la media y la desviación estándar*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/*Llena un arreglo con 50  nums aleatorios rand 10-----------*/
/*Calcula la moda------*/
/*Calcula la media------*/
/*Calcula la desviacion estandar*/
/*Calcula la media (promedio) de los datos.----
Calcula la diferencia entre cada dato y la media, eleva esa diferencia al cuadrado.
Calcula el promedio de las diferencias al cuadrado, que se llama varianza.
Calcula la raíz cuadrada de la varianza, lo que te dará la desviación estándar.*/



#define TAM 50
//TAM define el tamaño maximo del array y determina iteraciones

int main (){
    int arrayRandNum[TAM];
    int frecuencia[TAM] = {0};
    int moda;
    int maxFrecuencia = 0;
    int suma = 0;
    float media;
    float varianza = 0;
    float desviacion;


    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        arrayRandNum[i] = rand() % 10;
        suma += arrayRandNum[i];
        frecuencia[arrayRandNum[i]]++;
    }
    media = (float)suma/TAM;
    for (int i = 0; i < TAM; i++)
    {
        if (frecuencia[i]> maxFrecuencia)
        {
            maxFrecuencia = frecuencia[i];
            moda = i;
        }
        varianza += pow(arrayRandNum[i]-media,2);
    }
    varianza /=TAM; //Media de la varianza

    desviacion= sqrt(varianza);
    
    //La media se imprime como %.2f, es decir un float con dos decimales
    printf("La moda es: %d \n", moda);
    printf("La media es %.2f \n", media);
    printf("y la desviacion es %.4f \n", desviacion);

    return 0;
    


    
    
}



