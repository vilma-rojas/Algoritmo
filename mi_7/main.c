#include <stdio.h>
#include <stdlib.h>

/*
Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
 ‘menor’ si la edad es menor o igual a 12
 ‘cadete’ si la edad está comprendida entre 13 y 18
 ‘juvenil’ si la edad es mayor que 18 y no supera los 26
 ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores
*/

int main()
{
    int edad;

    printf ("Ingresa edad: ");
    scanf ("%d",&edad);

    if(edad < 13){
        printf("Es Menor");
    } else { if(edad > 12 && edad < 19){
            printf("Es Cadete");
            } else { if(edad > 18 && edad < 26){
                    printf("Es Juvenil");
                } else { printf("Es Mayor"); }

            }

    }

    return 0;
}
