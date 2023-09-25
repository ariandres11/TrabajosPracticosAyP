
#include <stdio.h>
int main (){
    int a,b,res;
    char op;
    printf("Ingrese el primer numero involucrado \n");
    scanf(" %d", &a);
    printf("Ingrese el operando involucrado \n");
    scanf(" %c", &op);
    printf("Ingrese el segundo numero involucrado \n");
    scanf(" %d", &b);


    
    switch (op)
    {
    case '*':
        res = a*b;
        printf("El resultado es %d",res);
        break;
    case '-':
        res = a-b;
        printf("El resultado es %d",res);
        break;
    case '+':
        res = a+b;
        printf("El resultado es %d",res);
        break;
    case '/':
        res = a/b;
        printf("El resultado es %d",res);
        break;
    
    default:
        break;
    }
}