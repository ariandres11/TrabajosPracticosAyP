/*Escriba un programa que contenga un arreglo de longitud 1000 de cadenas de texto de hasta 30 caracteres cada una. El programa debe permitir al usuario ingresar una oración y luego verificar si las palabras de la oración están presentes en el arreglo (diccionario) o no. Si una palabra no está presente, el programa debe indicarlo y darle la opción al usuario de agregarla. Al terminar de analizar el texto, el programa debe
imprimir el estado actual del diccionario. El programa termina con la palabra “fin”.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LON 10 // Despues cambiar a 1000
#define CARMAX 30

int main()
{
    char diccionario[LON][CARMAX];
    int lonDic = 0; // Inicializo

    char palabraIngresada[CARMAX];

    char resp;

    printf("Bienvenido, este es un sistema de diccionario, con cada palabra que escriba, si no esta en el diccionario se le va a preguntara si la quiere agregar. Para agregar una palabra al DICCIONARIO presione S o N luego del envio de la palabra.  \n");
    printf("Para mostrar el diccionario tipee -mostrar- ");
    while (1)
    {
        printf("Ingrese una palabra \n");
        scanf("%s", palabraIngresada);

        if (strcmp(palabraIngresada, "fin") == 0)
        {
            break; // Termina el bucle si la palabra es fin
        }
        if(strcmp(palabraIngresada, "mostrar")==0){
            printf("El diccionario actual es: \n");
        for (int i = 0; i < lonDic; i++)
        {
            printf("%d: %s \n", i+1, diccionario[i]);
        }

        }
        bool coin = false;
        for (int i = 0; i < lonDic; i++)
        {
            if (strcmp(palabraIngresada, diccionario[i]) == 0)
            {
            coin = true;
            break; // Termina al encontrar una coincidencia
            }
        }
        if (coin)
        {
        printf("La palabra ya esta incluida en el diccionario.\n");
        }
        else
        {
            printf("La palabra no esta incluida en el diccionario, desea incluirla? \n");
            scanf(" %c",&resp); // Funciona solo con chars por el switch;
            switch (resp)
            {
            case 'S':
            case 's':
                // Me fijo si hay espacio en el dicc
                if (lonDic < LON)
                {
                    strcpy(diccionario[lonDic], palabraIngresada);
                    lonDic++;
                    printf("Palabra agregada con exito. \n");
                }
                else
                {
                    printf("El diccionario esta lleno, no se pueden agregar mas palabras. \n");
                }
            break;
            case 'N':
            case 'n':
                printf("No agregada al diccionario. \n");
            break;

            default:
                printf("Respuesta no valida, por favor ingrese S o N \n");
            }
        }
    }
    
    return 0;
}

/*
mientras((strcmp(palabraAChequear,fin)!=0)){
    for (int i = 0; i < londelarray; i++)
    {
        me fijo si tiene alguna coincidencia
    }
    if(coincidencia){
        No preguntar nada
    }else{
        preguntar si la quiere agregar al array
        scanf("%c", respuesta);
        switch (respuesta)
        {
        case 'S':
            diccionario[i]=palabraachequear;
            break;

        case 'N':
            sleep();
            break;

        default:
            break;
        }
    }

}
*/
