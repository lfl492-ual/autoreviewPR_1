/*
** Fichero: MayorTemperatura.c
** Descripción: Calcula el mayor de dos temperaturas
** Asunto: Selectiva simple
** Autor: Laura Fernández López
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 
 int main()
 {
     system("cls||clear");
 
     float t1, t2; /* dos valores de temperatura */
     float tmax;   /* temperatura maxima         */
 
     printf("TEMPERATURA MAXIMA\n");
     printf("==================\n\n");
     printf("Introduzca temperatura 1: ");
     scanf(" %f", &t1);
     printf("Introduzca temperatura 2: ");
     scanf(" %f", &t2);
     if (t1 >= t2)
         tmax = t1;
     else
         tmax = t2;
     printf("\nTemperatura maxima: %.2f", tmax);
 }