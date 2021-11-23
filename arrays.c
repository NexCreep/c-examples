/*
	- Rellenar un array de 5 números
	- Impresion por pantalla todos
	- Impresion por pantalla pos impares
*/

#include <stdio.h>
#include <locale.h>

#define TAM 5

main(){
	int i = 0;
	int arrayNum[TAM];
	
	for(i = 0; i < TAM; i++)
		arrayNum[i] = 0;
	
	setlocale(LC_ALL, "Spanish");
		
	for(i = 0; i < TAM; i++){
		printf("Introduce el %dº numero: ", i+1);
		scanf("%d", &arrayNum[i]);
		fflush(stdin);
	}
	
	printf("\nTODO\n");
	
	for(i = 0; i < TAM; i++)
		printf("POS %d = %d\n", i, arrayNum[i]);
		
	printf("\nIMPARES\n");
	
	for(i = 1; i < TAM; i = i+2)
		printf("POS %d = %d\n", i, arrayNum[i]);

	
	return 0;
}
