#include <stdio.h>
#include <string.h>

#define MAX 10 //Longitud máxima del array entero
#define LEN 20 //Longitud maxima de cada string
void insertar_str(char array[MAX][LEN], char cadena[LEN]);
void printarray(char arreglo[MAX][LEN]);
/*Escriba un programa que a partir de un arreglo inicialmente vacío de 10 cadenas de texto de longitud máxima 20 permita insertar una cadena nueva indicada por el usuario en orden alfabético. Al insertar una nueva cadena el programa debe desplazar las cadenas que ya se encuentren en el arreglo para hacerle lugar. Si el arreglo está lleno, se debe quitar la última cadena para hacer lugar a la nueva, a menos que la nueva sea la última por orden alfabético, en cuyo caso no se debe insertar. Ante cada inserción, el programa
debe imprimir el arreglo en su nuevo estado. El programa termina al ingresar el usuario la palabra “fin”*/

int main(){
    
    /*Char* significa que el arreglo está compuesto por punteros a chars, es un arreglo de cadenas de caracteres, donde cada elemento es un puntero a una cadena de caracteres a*/
    char *array[MAX][LEN]; //Array entero
    char str[LEN]; //String
    

    //Inicio array vacio
    for (int i = 0; i < MAX; i++)
    {
        strcpy(array[i],"");
    }

    //Ingreso de strings por el usuario
    printf("Ingrese un string o la palabra -fin- si quiere terminar \n");
    scanf("%s", str);
    
    //Siempre que el string no sea "fin" hay que intentar acomodarlo

    while (strcmp(str,"fin")!=0)
    {
        insertar_str(array, str);
        printf("Ingrese un string o la palabra -fin- si quiere terminar \n");
        scanf("%s", str);
    }
    
    return 0;
}
//No retorna nada
void insertar_str(char array[MAX][LEN], char cadena[LEN]){
    int i=0;
    printf("%i \n", i);
    //Encuentra la posicion para insertar
    while ( i < MAX&& strcmp(array[i], cadena)<0)
    {
        i++;
    }
    

    if(i<MAX){
        for (int j = MAX-1; j >i; j--)
        {
            strcpy(array[j], array[j-1]);
        }

        strcpy(array[i], cadena);

        printarray(array);
        

    }
    
}

// Función que imprime el arreglo de cadenas
void printarray(char arreglo[MAX][LEN]) {
    printf("Array:\n");
    for (int i = 0; i < MAX; i++) {
        if (arreglo[i][0] != '\0') {
            printf("%s\n", arreglo[i]);
        }
    }
}