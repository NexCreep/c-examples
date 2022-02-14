/*
	INPUT					FICHERO
						  Suma: 10 (0)
	N�mero: 3 ----------- N�mero: 3
	N�mero: 7 ----------- N�mero: 7
	N�mero: -1 ---------- **OPERA**
						  Resta : -4 (0)
	N�mero: 4 ----------- N�mero 4
	N�mero: 5 ----------- N�mero 5
	N�mero: 3 ----------- N�mero 3
	N�mero: -1 ---------- **OPERA**
						  Multiplicaci�n: 8 (0)
	Numero: 1 ----------- N�mero: 1
	N�mero: 8 ----------- N�mero: 8
	Numero: -1 ---------- **OPERA**
	
	Fin proceso
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 150
#define TXT 50

#define deplz(n) ((long)(sizeof(file1) * (n-1)))

int getInt(const char message[]);

main(){
	struct file{
		char num[TXT];
	};
	
	char sample[TXT] = "";
	char charI[TXT] = "";

	int numArray[TAM];
	int userInt = 0, result = 0;
	int i = 0, nexti = 0;
	
	struct file file1 = {""};
	
	FILE *fich;
	
	setlocale(LC_ALL, "Spanish");
	
	for (i=0; i<TAM; i++)
		numArray[i] = 0;
	
	
	//BLOQUE DE SUMA
	fich = fopen("operaciones.txt", "w+");
	i = nexti;
	strcpy(sample ,"Suma: 0");
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, sample);
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	userInt = getInt("N�mero: ");
	while(userInt != -1){
		
		memset(file1.num, ' ', sizeof(file1.num));
		strcpy(file1.num, "\nN�mero: ");
		itoa(userInt, charI, 10);
		strcat(file1.num, charI);
		fwrite(file1.num, sizeof(file1), 1, fich);
		
		numArray[nexti] = userInt;
		nexti++;
		userInt = getInt("N�mero: ");
		
	}
	fclose(fich);
	
	result = numArray[i];
	i++;
	for (i; i<nexti; i++)
		result = numArray[i] + result;
	
	fich = fopen("operaciones.txt", "r+");
	
	fread(&file1, sizeof(file1), 1, fich);
	while(!feof(fich) && strcmp(file1.num , sample))
		fread(&file1, sizeof(file1), 1, fich);
	
	
	fseek(fich, deplz(0), SEEK_CUR);
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, "Suma: ");
	itoa(result, charI, 10);
	strcat(file1.num, charI);
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	fclose(fich);
	
	
	//BLOQUE DE RESTA
	fich = fopen("operaciones.txt", "a");
	i = nexti;
	memset(sample, ' ', sizeof(sample));
	strcpy(sample ,"\nResta: 0");
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, sample);
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	userInt = getInt("N�mero: ");
	while(userInt != -1){
		
		//memset(file1.num, ' ', sizeof(file1.num));
		strcpy(file1.num, "\nN�mero: ");
		itoa(userInt, charI, 10);
		strcat(file1.num, charI);
		fwrite(file1.num, sizeof(file1), 1, fich);
		
		numArray[nexti] = userInt;
		nexti++;
		userInt = getInt("N�mero: ");
		
	}
	fclose(fich);
	
	result = numArray[i];
	i++;
	for (i; i<nexti; i++)
		result = result - numArray[i];
	
	fich = fopen("operaciones.txt", "r+");
	
	fread(&file1, sizeof(file1), 1, fich);
	while(!feof(fich) && strcmp(file1.num , sample)){
		fread(&file1, sizeof(file1), 1, fich);
	}
	
	fseek(fich, deplz(0), SEEK_CUR);
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, "Resta: ");
	itoa(result, charI, 10);
	strcat(file1.num, charI);
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	fclose(fich);
	
	
	//BLOQUE DE MULTIPLICACI�N
	fich = fopen("operaciones.txt", "a");
	i = nexti;
	memset(sample, ' ', sizeof(sample));
	strcpy(sample ,"\nMultiplicaci�n: 0");
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, sample);
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	printf("\n(%s)\n", file1.num);
	printf("\n(%s)\n", sample);
	
	userInt = getInt("N�mero: ");
	while(userInt != -1){
		
		memset(file1.num, ' ', sizeof(file1.num));
		strcpy(file1.num, "\nN�mero: ");
		itoa(userInt, charI, 10);
		strcat(file1.num, charI);
		fwrite(file1.num, sizeof(file1), 1, fich);
		
		numArray[nexti] = userInt;
		nexti++;
		userInt = getInt("N�mero: ");
		
	}
	fclose(fich);
	
	result = numArray[i];
	i++;
	for (i; i<nexti; i++)
		result = result * numArray[i];
	printf("\n[%d]\n", result);
	
	fich = fopen("operaciones.txt", "r+");
	fseek(fich, deplz(0), SEEK_SET);
	
	fread(&file1, sizeof(file1), 1, fich);
	while(!feof(fich) && strcmp(file1.num , sample)){
		printf("%s", file1.num);
		printf("\n[%d]\n", strcmp(file1.num, sample));
		fread(&file1, sizeof(file1), 1, fich);
	}
	
	fseek(fich, deplz(0), SEEK_CUR);
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, "Multiplicaci�n: ");
	itoa(result, charI, 10);
	strcat(file1.num, charI);
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	fclose(fich);
	

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
