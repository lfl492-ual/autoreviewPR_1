
/*
** Descripción: Aplica la formula para calificación de alumnos
**
** Asunto: Selectiva simple
*/

#include <stdio.h>
#include <stdlib.h>

// inicia ejecucion en main
int main(void)
{
    system("cls||clear");
    printf("CALCULO DE CALIFICACIONES\n");
    printf("=================================\n\n");

    float n_TE = 0;
    float n_PR = 0;
    float examen = 0;

    printf("¿Cuál es la nota de los trabajos evaluables (0-1)?: ");
    scanf("%f", &n_TE);

    printf("¿Cuál es la nota de las practicas (0-1)?:  ");
    scanf("%f", &n_PR);

    printf("¿Cuál es la nota obtenida en el examen (1-10)?:  ");
    scanf("%f", &examen);

    float calificacion = examen;

    if (examen >= 4)
        calificacion = (n_PR * (examen * 0.8)) + n_TE + n_PR;

    printf("La calificacion de alumno es %.2f\n", calificacion);
    return 0;
}