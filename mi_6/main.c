#include <stdio.h>
#include <stdlib.h>

/*
Dados un mes y el año correspondiente informar cuantos días tiene el mes.
*/

int main()
{
    int diasQueTiene(int);
    int mes, anio;

    printf ("Ingresa mes: ");
    scanf ("%d",&mes);
    printf ("Ingresa anio: ");
    scanf ("%d",&anio);

    printf("La cantidad de dias que tiene ese mes son: %d dias", diasQueTiene(mes));



    return 0;
}

int diasQueTiene(int mes){
    if(mes == 2){
        return 29;
    } else { if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                return 30;
            } else {
                return 31;
            }
    }

}
