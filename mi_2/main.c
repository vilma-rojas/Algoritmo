#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Dada una terna de números naturales que representan al día, al mes y al año de una
determinada fecha informarla como un solo número natural de 8 dígitos con la forma
(AAAAMMDD).
*/

int main()
{
    int dia, mes, anio;

    printf ("Introduzca el dia: ");
    scanf ("%d",&dia);
    printf ("Introduzca el mes: ");
    scanf ("%d",&mes);
    printf ("Introduzca el anio: ");
    scanf ("%d",&anio);

    if(dia < 10 && mes < 10){
        printf ("Calendario: %d",anio);
        printf ("0%d", mes);
        printf ("0%d", dia);
    } else {
        printf ("Calendario: %d",nio);
        printf ("%d", mes);
        printf ("%d", dia);
    }


}

