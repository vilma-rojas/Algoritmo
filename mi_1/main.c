#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int suma(int, int);
    int resta(int, int);
    int multiplicacion(int, int);

    int num1, num2;
    printf ("Elija Un Numero A: ");
    scanf ("%d",&num1);
    printf ("Elija Un Numero B: ");
    scanf ("%d",&num2);
    printf ("La suma es: %d\n",suma(num1, num2));
    printf ("La resta es: %d\n",resta(num1, num2));
    printf ("La multiplicacion es: %d\n",multiplicacion(num1, num2));


}

int suma(int num1, int num2){
    return num1 + num2 ;
}

int resta(int num1, int num2){
    return num1 - num2 ;
}

int multiplicacion(int num1, int num2){
    return num1 * num2 ;
}


