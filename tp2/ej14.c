#include <stdio.h>  

#define TAM 5
int main(){
    int numsIngresados[TAM];
    int e;
    int res;

    for (int  i = 0; i < TAM; i++)
    {
        printf("Elemento %d : ", i+1);
        scanf("%d", &numsIngresados[i]);
    }
    printf("Ingrese un entero");
    scanf("%d ", &e);
    getchar();
    //Leyendo el arreglo
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", numsIngresados[i]);
    }
    printf("\n");
    
    for (int i = 0; i < TAM; i++)
    {
        res = numsIngresados[i]*e;
        printf("%d ", res);
    }
    printf("1");
    printf("\n");
    return 0;
}