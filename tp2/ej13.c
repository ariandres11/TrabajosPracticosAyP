/* Indicar que hace el programa con mis palabras*/

#include <stdio.h>
int main()
{
    int v[5];
    int e;
    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    scanf("%d", &e);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        int p = v[i] * e;
        printf("%d ", p);
    }
    printf("\n");
    return 0;
}