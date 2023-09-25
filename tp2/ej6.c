#include <stdio.h>
#include <string.h>

int main(){
    char *data[]={"2003/04/15", "2003/04/12", "1990/12/20", "2022/12/18", "2018/12/09", "2010/01/08", "2005/07/11", "2005/07/12", "2080/09/20", "2020/05/16"};

    //Calcula la longitud de cada string en funcion del tamaño total y el tamaño de una fecha
    //Asi obtengo el numero total de elementos del array
    int num_data = sizeof(data) / sizeof(data[0]);
    char data_min[11];
    char data_max[11];

    //Inicializa los arreglos con la primera fecha;
    strcpy(data_min, data[0]);
    strcpy(data_max, data[0]);

    for (int i = 0; i < num_data; i++)
    {
        int year, month, day;
        //Uso sscanf porque estoy trabajando con una cadena harcoded y no con entradas del usuario
        sscanf(data[i], "%d/%d/%d", &year, &month, &day);

        int year_min, month_min, day_min;
        sscanf(data_min, "%d/%d/%d", &year_min, &month_min, &day_min);

        int year_max, month_max, day_max;
        sscanf(data_max, "%d/%d/%d", &year_max, &month_max, &day_max);

        if(year < year_min || (year == year_min &&(month<month_min||(month==month_min&&day<day_min)))){
            sprintf(data_min, "%04d/%02d/%02d",year,month,day);
        }
        if (year > year_max || (year == year_max &&(month>month_max||(month==month_max&&day>day_max))))
        {
            sprintf(data_max, "%04d/%02d/%02d", year, month, day);
        }  
    }
    printf("La fecha minima es : %s \n", data_min);
    printf("La fecha maxima es : %s \n", data_max);
    return 0;
}
