/*
**Fichero: SaludoFormal.c
**Autor: Laura Fernández López
**Fecha: 12-3-2025
**
** Descripción: Muestra al usuario un saludo utilizando el nombre que es leido de teclado previamente
**
*/

#include <stdio.h>
int main(){
    char nombre[30];
    char apellidos [30];
    printf("Por favor, introduzca su nombre: ");
    scanf(" %[^\n]s",nombre);
    printf("Por favor, introduxca sus apellidos: ");
    scanf(" %[^\n]s",nombre, apellidos);
    printf("\n\nSaludos D. %s", nombre);
    printf("\nBienvenido al fantástico mundo de la programación");
    return 0;
}