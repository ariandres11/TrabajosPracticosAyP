#include <stdio.h>

#define LEN 20

int main (){
    int nums[20] = {2, 5, 8, 12, 17, 20, 25, 30, 33, 40, 45, 50, 55, 60, 65,70, 75, 80, 85, 90};
    int numsImpares[LEN];
    int m=0;
    printf("Arreglo original:    ");
    for (int i = 0; i < LEN; i++)
    {
        printf("%d  ", nums[i]);
        if (nums[i]%2 !=0)
        {
            numsImpares[m]=nums[i];
            m++;
        }
        
    }
    printf("\n");
    printf("Los numeros impares son:    ");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ", numsImpares[i]);
    }
    printf("\n");
    printf("La cantidad de numeros impares es:  %d  \n",m);
    return 0;
}