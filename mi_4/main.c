#include <stdio.h>
#include <stdlib.h>

/*
Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el
mayor entre ellos.
*/
int main()
{
    int mayorEntre(int, int);

    int num1, num2;

    printf ("Introuzca un numero: ");
    scanf ("%d",&num1);

    printf ("Introuzca otro numero: ");
    scanf ("%d",&num2);

    if(num1!=num2){
        printf("El numero mayor es: %d\n",mayorEntre(num1, num2));

    } else {
        printf("Por favor introducir dos numeros distintos \n");
        printf ("Introuzca un numero: ");
        scanf ("%d\n",&num1);

        printf ("Introuzca otro numero: ");
        scanf ("%d\n",&num2);
    }

}

int mayorEntre(int num1, int num2){
    if(num1 > num2){
        return num1;
    } else {
        return num2;
    }
}
