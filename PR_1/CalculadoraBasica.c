/*
** Fichero: CalculadoraBasica.c
*
** Descripción: Funciones básicas de una calculadora
**
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	char operacion, c;

	do{ 
		printf("Vamos a realizar una operación aritmética simple:\n\n");
		printf("Introduzca el primer valor con que vamos a operar: ");
		scanf(" %d",&a);
		printf("Introduzca el segundo valor con que vamos a operar: ");
		scanf(" %d",&b);
		printf("\n");
		printf("Introduzca + para sumar, - para restar o * para multiplicar: ");
		scanf(" %c",&operacion);
		switch(operacion){
		case '+': printf("El resultado es: %d\n", a+b);
			      break;
		case '-': printf("El resultado es: %d\n", a-b);
                  break;
		case '*': printf("El resultado es: %d\n", a*b);
                  break;
		default:  printf("Operación incorrecta\n");
		          break;
		}
		printf("\n´¿Desea efectuar una nueva operación (S/N)? ");
	              scanf(" %c",&c);   
	}while ((c!='N') && (c!='n'));
	return 0;
}