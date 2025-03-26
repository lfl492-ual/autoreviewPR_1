/*
**Archivo: Formatos.c
*
**Descripción: Formatos de salida para distintos números
**Autor: Laura Fernández López
**
*/


#include <stdio.h>

int main()
{
  	system("clear"); // Esta instruccion del sistema despeja la consola linux
    char nombre[30];
    char c;
    
    printf("Pruebas de formatos de salida\n");
    printf("=============================\n");
    printf("\nDiferentes formatos de salida para el texto:\n\n");
    printf("%s\n", "Esta es una línea de texto de prueba");
    printf("%50s\n", "Esta es una línea de texto de prueba");
    printf("%-50s\n", "Esta es una línea de texto de prueba");
    printf("%-50.10s\n", "Esta es una línea de texto de prueba");
    printf("\nDiferentes formatos de salida para números enteros:\n");
    printf("\n1)\n%d\n%d\n%d\n%d\n", 8, 1234, 23, 12000);
    printf("\n2)\n%10d\n%10d\n%10d\n%10d\n", 8, 1234, 23, 12000);
    printf("\nDiferentes formatos de salida para números reales:\n");
    printf("\n1)\n%f\n%f\n%f\n", 123.89, -4.0, 2345.8999);
    printf("\n2)\n%15f\n%15f\n%15f\n", 123.89, -4.0, 2345.8999);
    printf("\n3)\n%15.2f\n%15.2f\n%15.2f\n", 123.89, -4.0, 2345.8999);
    printf("\n\nPulse una tecla para finalizar");
    scanf(" %c", &c);

    return 0;
}