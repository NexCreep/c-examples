/*
	Comprueba si el array es capicúa
*/

#include <stdio.h>
#include <locale.h>

#define TAM 11

main(){
	
	short i = 0, iE= 0, iMedio = 0, isCap = 0;
	int arrayInt[] = {2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2};
	
	setlocale(LC_CTYPE, "Spanish");
	
	iE = TAM - 1;
	iMedio = iE /2;
	
	isCap = 1;
	while(isCap != 0 && i <= iMedio){
		if(arrayInt[i] != arrayInt[iE - i])
			isCap = 0;

		i++;
	}
	
	if(isCap != 0)
		printf("El array es capicúa");
	else
		printf("El array no es capicúa");
	
	return 0;
}
