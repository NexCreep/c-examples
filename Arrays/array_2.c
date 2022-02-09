/*
	Localiza el numero mayor y menor en un array de 10 elementos
*/

#include <stdio.h>
#include <locale.h>

#define TAM 10

main(){
	short i = 0;
	int max = 0, min = 0;
	int arrayNum[] = {-92, 86, 0, 52, 18, 64, -3, 1, 0, -92};
	int posMax[TAM];
	int posMin[TAM];
	
	for(i = 0; i < TAM; i++){
		posMax[i] = 0;
		posMin[i] = 0;
	}
		
	setlocale(LC_CTYPE, "Spanish");
	
	max = arrayNum[0];
	min = arrayNum[0];
	for(i = 1; i < TAM; i++){
		if(arrayNum[i] > max)
			max = arrayNum[i];
		else{
			if(arrayNum[i] < min)
				min = arrayNum[i];
		}
	}
	

	for(i = 0; i < TAM; i++){
		posMax[i] = -1;
		posMin[i] = -1;
		
		if(arrayNum[i] == max){
			posMax[i] = i;
		}
		if(arrayNum[i] == min){
			posMin[i] = i;
		}
	}
	
	printf("El n�mero m�s grande es %d y esta en la posici�n ", max);
	for (i = 0; i < TAM; i++){
		if(posMax[i] != -1){
			printf("%d, ", posMax[i]);
		}
	}
	printf("\nEl n�mero m�s peque�o es %d y esta en la posici�n ", min);
	for (i = 0; i < TAM; i++){
		if(posMin[i] != -1){
			printf("%d, ", posMin[i]);
		}
	}
	
	return 0;
}
