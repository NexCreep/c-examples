#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 11

main(){
	char letra = ' ';
	char literal[TAM] = "";
	int secIn = 0,sec = 0, min = 0, h = 0;
	float perc = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	
	printf("Introduzca una letra y un literal <max %d caracteres> a la vez:\n", TAM - 1);
	scanf("%c %s", &letra, literal);
	fflush(stdin);
	
	printf("\nEl literal y el carácter introducidos son %s y %c, respectivamente.\n", literal, letra);
	
	
	printf("\nIntroduzca segundos: ");
	scanf("%d", &secIn);
	fflush(stdin);
	
	sec = secIn;
	
	
	min = sec / 60;
	sec = sec % 60;
	
	h =  min / 60;
	min =  min % 60;
	
	printf("\n%d segundos son: %d hora/s, %d minuto/s y %d segundo/s\n", secIn, h, min, sec);
	
	
	printf("\nIntroduzca un porcentaje: ");
	scanf("%f", &perc);
	fflush(stdin);
	
	printf("\nEl porcentaje introducido es: %.1f%%\n\n", perc);
	
	
	system("pause");
	
	return 0;
}
