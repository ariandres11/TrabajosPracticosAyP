#include <stdio.h>
//Ejercicio 3. Escriba un programa que permita realizar la suma de dos vectores de dimensión 5 utilizando arreglos inicializados en el código (hardcoded) imprimiendo el resultado
int main (){
    int array1[]={1,2,3,4,5};
    int array2[]={4,3,2,1,0};
    int i;
    int resArray[5];

    for (i = 0; i < 5; i++)
    {
        resArray[i]=array1[i]+array2[i];
        printf("%d  \n",resArray[i]) ;
    }
    return 0;

}

