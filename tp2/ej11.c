#include <stdio.h>

/*Consigna: indicar que hace el programa*/

/*Respuesta: Imprime los impares*/
int main()
{
    int x[20] = {2, 5, 8, 12, 17, 20, 25, 30, 33, 40, 45, 50, 55, 60, 65,70, 75, 80, 85, 90};
    int n = 20;
    int y[20];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
        if (x[i] % 2 != 0) //(si es impar)
        {
            y[m++] = x[i]; 
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", y[i]);
    }
    printf("\n");
    //printf("%d",m); m almacena la cantidad de numeros impares del arreglo 
    return 0;
}