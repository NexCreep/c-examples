/*
	INPUT					FICHERO
						  Suma: 10 (0)
	Número: 3 ----------- Número: 3
	Número: 7 ----------- Número: 7
	Número: -1 ---------- **OPERA**
						  Resta : -4 (0)
	Número: 4 ----------- Número 4
	Número: 5 ----------- Número 5
	Número: 3 ----------- Número 3
	Número: -1 ---------- **OPERA**
						  Multiplicación: 8 (0)
	Numero: 1 ----------- Número: 1
	Número: 8 ----------- Número: 8
	Numero: -1 ---------- **OPERA**
	
	Fin proceso
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 150
#define TXT 50

int getInt(const char message[]);

main(){
	char text[TXT] = "";
	
	int numArray[TAM];
	int userInt = 0, result = 0;
	int i = 0, nexti = 0;
	
	FILE *fich;
	
	setlocale(LC_ALL, "Spanish");
	
	for (i=0; i<TAM; i++)
		numArray[i] = 0;
	
	
	fich = fopen("operaciones.txt", "w+");
	
	//BLOQUE DE SUMA
	i = nexti;
	
	fputs("Suma: 0\n", fich);
	strcat(text, "Numero");
	userInt = getInt("Numero: ");
	while(userInt != -1){
		numArray[nexti] = userInt;
		nexti++;	
		userInt = getInt("Número: ");
		fputs("Número: ", fich);
		
	}
	
	result = numArray[i];
	i++;
	for (i; i<nexti; i++)
		result = numArray[i] + result;
		
	printf("Suma: %d\n", result);
	
	//BLOQUE DE RESTA
	i = nexti;
	
	userInt = getInt("Número: ");
	while(userInt != -1){
		numArray[nexti] = userInt;
		nexti++;	
		userInt = getInt("Número: ");
		
	}
	
	result = numArray[i];
	i++;
	for (i; i<nexti; i++)
		result = result - numArray[i];
		
	printf("Resta: %d\n", result);
	
	//BLOQUE DE MULTIPLICACIÓN
	i = nexti;
	
	userInt = getInt("Número: ");
	while(userInt != -1){
		numArray[nexti] = userInt;
		nexti++;	
		userInt = getInt("Número: ");
		
	}
	
	fclose(fich);
	
	result = numArray[i];
	i++;
	for (i; i<nexti; i++)
		result = numArray[i] * result;
		
	printf("Resta: %d\n", result);

	
	printf("\nFin proceso");
	return 0;
}


int getInt(const char message[]){
	int input = 0;
	
	printf("%s", message);
	scanf("%d", &input);
	fflush(stdin);
	
	return input;
}
