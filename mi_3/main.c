#include <stdio.h>
#include <stdlib.h>

/*
A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)
*/

int main()
{
    int partes(int, int);
    int restoDeLaDivisionPor5(int);

    int num;

    printf ("Introuzca numero: ");
    scanf ("%d",&num);;

    printf("a) La quinta parte es: %d\n", partes(num, 5));
    printf("a) El resto de la division es: %d\n", restoDeLaDivisionPor5(num));
    printf("a) La septima parte es: %d\n", partes(partes(num, 5), 6));
    return 0;
}

//b)
int restoDeLaDivisionPor5(int num){
    int resto = num % 5 ;
    return resto ;
}
//a) c)
int partes(int num, int parte){
    return num / parte;
}
