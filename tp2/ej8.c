 /* Escriba un programa que genere un arreglo de 20 números enteros aleatorios entre 0 y 9, lo imprima y luego elimine los duplicados, imprimiendo el arreglo resultante al finalizar*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define ARRMAX 20

 int main (){
    int arrayOr[ARRMAX];
    
    srand(time(NULL));

    //Fabrico el arreglo original
    for (int i = 0; i < ARRMAX; i++)
    {
        arrayOr[i]= rand() % 10;
    }
    printf("El arreglo sin sacar los numeros duplicados es: \n");
    //Imprimo arreglo original
    for (int i = 0; i < ARRMAX; i++)
    {
        printf("%d \n",arrayOr[i]);
    }
    //Elimino los duplicados
    for (int i = 1; i < ARRMAX; i++)

    {
        if (arrayOr[i]!=-1)
        {
            for (int j = i+1; j < ARRMAX; j++)
            {
                if (arrayOr[i]==arrayOr[j])
                {
                //Significa que esta duplicado
                arrayOr[j] = -1;
                }
            }
        }
        
        
    }
    printf(" \n El arreglo  sacando los numeros duplicados es: \n");
    for (int i = 0; i < ARRMAX; i++)
    {
        if (arrayOr[i]!= -1)
        {
            printf(" %d \n", arrayOr[i]);
        }
    } 
    return 0;
 }
 
