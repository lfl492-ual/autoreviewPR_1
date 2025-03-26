/*
** Fichero: PitagorasPR.c
** Descripción: Verificar si tres longitudes verifican el teorema de pitgoras 
** Autor: Laura Fernández López
**
*/

#include <stdio.h>
#include <math.h>


int main ()
{
    int cateto1, cateto2, hipotenusa;

    printf("Introduce la primera longitud: ");
    scanf(" %f", &cateto1);
    printf("Introduce la segunda longitud: ");
    scanf(" %f", &cateto2);
    printf("Introduce la tercera longitud: ");
    scanf(" %f", &hipotenusa);


    if (hipotenusa^2 =cateto1^2 +cateto2^2) {
        printf("Cumple el teorema de pitagoras: ");
    } else {
        printf("No cumple el torema de pitagoras: ");
    }

    return 0;
}