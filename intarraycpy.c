#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void intarraycpy(int arrayinput[], int arrayoutput[]);

main(){
	int i = 0;
	int numArray[TAM] = {6, 7, 8, 9, 2, 3, 1, 5, 9, 0};
	int numArrayB[TAM] = {0};

	intarraycpy(numArray, numArrayB);
	
	for(i = 0; i < TAM; i++){
		printf("%d, ", numArrayB[i]);
	}
	
	return 0;
}

void intarraycpy(int arrayinput[], int arrayoutput[]){
	int i = 0;
	
	int tam = (int)sizeof arrayinput / sizeof arrayinput[0];
	
	printf("%d\n", tam);
	
	for(i = 0; i < tam; i++){
		arrayoutput[i] = arrayinput[i];
	}
}
