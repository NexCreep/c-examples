#include <stdlib.h>
#include <stdio.h>

main(){
	int numE = 0;
	double numR = 0;
	
	// Funciones de utilidad
	numE = atoi("12345"); // Convierte un string en un entero
	printf("%d\n", numE);
	
	numR = atof("12346.75"); // Convierte un string en un real
	printf("%.2f\n", numR);
}
