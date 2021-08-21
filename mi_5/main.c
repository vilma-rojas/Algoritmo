#include <stdio.h>
#include <stdlib.h>

/*
Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir
una leyenda según sea: equilátero, isósceles o escálenos.
*/

int main()
{
    int esIsoceles(int, int, int);

    int l1, l2, l3;

    printf ("Lado 1: ");
    scanf ("%d",&l1);
    printf ("Lado 2: ");
    scanf ("%d",&l2);
    printf ("Lado 3: ");
    scanf ("%d",&l3);

    if(l1 == l2 && l2 == l3){
        printf("El triagulo es equilatero");
    } else { if(esIsoceles(l1, l2, l3) == 0){
                printf("El triangulo es isoceles");
            } else {
                printf("El triangulo es escaleno");
            }
    }

    return 0;
}

int esIsoceles(int l1, int l2, int l3){
    if(l1 == l2 && l2 != l3){
        return 0;
    } else{ if(l1 != l2 && l2 == l3){
                return 0;
            } else  {
                return 1;
            }

    }
}
