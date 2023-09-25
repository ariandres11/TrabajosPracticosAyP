#include <stdio.h>
int main() {
    int n,cont,fact;
    fact=1;
    printf("Introduzca un numero natural y el programa calculara su factorial\n");
    scanf("%d", &n);
    cont=n;
    while (cont > 0)
    {
        fact *= cont;
        cont--;
       
    }
    
    printf("Su factorial es %d \n", fact);

    


}