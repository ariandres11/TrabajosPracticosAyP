
/*Escriba un programa que mantenga un arreglo de 20 cadenas de caracteres de 
longitud máxima 30 permitiendo al usuario ingresarlas desde el teclado solo 
si la cadena ingresada es al menos un 20% diferente a cualquier cadena ya ingresada.
 Para calcular la similitud entre cadenas, se deben comparar letra a letra y luego calcular
  (cantidad de letras iguales) dividido entre (tamaño de la cadena más larga). Luego de
cada ingreso, se debe imprimir el arreglo con las cadenas ingresadas. (PS)*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include <stdlib.h> //Para malloc
//FALTA QUE EL USUARIO SEA EL QUE INGRESE LAS CADENAS NADA MAS


//Declaro la longitud maxima de cada string en una constan
#define LEN 30
//Cantidad maxima de elementos del array
#define MAX 20
bool son20Dis(const char *cadena1,const char*cadena2);

int main(){
    //Array bidimen: define un array que puede contener hasta MAX_ELEMENTOS(filas) cada uno de MAX_LONGITUD(columnas)
    char array[MAX][LEN];
    //Inicializo el array con 0 elementos
    int numElementos = 0;
    char nuevoElemento[LEN];
    
    while (numElementos<MAX)
    {
        bool esDif=true; //Reseteo de esDif
        printf("Ingresa una palabra y si al menos es un 20porciento diferente de la anterior se agregara al array \n");
        scanf("%s",nuevoElemento);
        for (int i = 0; i < numElementos; i++)
        {
            if (!son20Dis(nuevoElemento,array[i]))
            {
                esDif = false;
                break;
            }
        }
        if(esDif){
        
        //Agrego efectivamente la nueva cadena 
        strcpy(array[numElementos],nuevoElemento);
        numElementos++;
        printf("Cadena agregada con exito : %s \n",nuevoElemento);
        }else{
        printf("No cumple los requisitos");
        }
        printf("Palabras ingresadas con exito: \n");
        for (int i = 0; i < numElementos; i++)
        {
        printf("%s \n", array[i]);
        }
    }
    
    return 0;
}
//Declaro los parametros como const para saber que no van a ser modificados dentro de la funcion
//Funcion que indica si la cadena 1 es al menos un 20% dsitinta a la cadena 2
bool son20Dis(const char *cadena1,const char*cadena2){
    //Leo la long de cada cadena 
    int longitud1=strlen(cadena1);
    int longitud2=strlen(cadena2);
    //Encuentro la long minima
    //Terna: cond ? true : false 
    int longitudMin = (longitud1 < longitud2)? longitud1 : longitud2;

    //Inicializo el contador de letrasdist
    int charDif = 0;

    //Compara los chars uno por uno
    for (int i = 0; i < longitudMin; i++)
    {
        if (cadena1[i]!=cadena2[i])
        {
            charDif++;
        }
    }
    //Double for mas precision 
    double porcentajeDif = (double) charDif/longitudMin*100.0;
    //La func devuelve true si al menos el porcentaje es mayor a 20%
    return porcentajeDif >20.0;
}