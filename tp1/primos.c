#include <stdio.h>



//esPrimo devuelve 1 si es primo y 0 si no lo es
int esPrimo(int num);

int main (){
    int numero;
    printf("Ingrese un numero ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (esPrimo(i))
        {
            printf("%d Es primo \n", i);
        }
        
    }
    


    return 0;   
  //esPrimo(cualqCosa)  
}


int esPrimo(int num) {
    if (num==1)
    {
        return 0;
    }
        for ( int i = 2; i<=num;i++){
            if (num %i==0)
            {
                
                return 0;
            }
            
        }
    return 1;
    
}