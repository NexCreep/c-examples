/*
	Raúl López-Bravo de Castro

	Requisitos
		· Fichero binario
		· Registros de 3 cadenas de máximo 10 caracteres
		· Solicitar una cadena por pantalla
		· Indicar cuantas veces se encuentra en el fichero
		· Las mayúscula y minúsculas no son significativos
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define TAM 11

main(){
	struct reg {
		char strA[TAM];
		char strB[TAM];
		char strC[TAM];
	};
	
	FILE *fich;
	
	
	struct reg regUser = {"", "", ""};
	char userStr[TAM], cmpBuffer[TAM];
	int strCount = 0, i = 0;
	
	setlocale(LC_ALL, "Spanish");
	
	//Intrucciones para prueba
	fich = fopen("examen.dat", "wb");
	
	strcpy(regUser.strA, "Caracola");
	strcpy(regUser.strB, "Hola");
	strcpy(regUser.strC, "Caracolas");
	fwrite(&regUser, sizeof(regUser), 1, fich);
	
	strcpy(regUser.strA, "Nulo");
	strcpy(regUser.strB, "adiós");
	strcpy(regUser.strC, "Caracola");
	fwrite(&regUser, sizeof(regUser), 1, fich);
	
	strcpy(regUser.strA, "Lleno");
	strcpy(regUser.strB, "Caracola");
	strcpy(regUser.strC, "Caracola");
	fwrite(&regUser, sizeof(regUser), 1, fich);
	
	fclose(fich);
	
	//Intrucciones del examen
	fich = fopen("examen.dat", "rb");
	
	printf("Cadena a buscar (máx. %d %s): ", TAM-1, TAM-1 != 1 ? "caracteres" : "caracter");
	gets(userStr);
	
	strcpy(cmpBuffer, userStr);
	
	for(i=0; i<strlen(cmpBuffer); i++){
		if(!isupper(cmpBuffer[i]))
			cmpBuffer[i]= toupper(cmpBuffer[i]);
	}
	
	fread(&regUser, sizeof(regUser), 1, fich);
	while(!feof(fich)){
		for(i=0; i<strlen(regUser.strA); i++){
			if(!isupper(regUser.strA[i]))
				regUser.strA[i]	= toupper(regUser.strA[i]);
		}
		
		strCount = !strcmp(regUser.strA, cmpBuffer) ? strCount+1 : strCount;
		
		for(i=0; i<strlen(regUser.strB); i++){
			if(!isupper(regUser.strB[i]))
				regUser.strB[i]	= toupper(regUser.strB[i]);
		}
		
		strCount = !strcmp(regUser.strB, cmpBuffer) ? strCount+1 : strCount;
		
		for(i=0; i<strlen(regUser.strC); i++){
			if(!isupper(regUser.strC[i]))
				regUser.strC[i]	= toupper(regUser.strC[i]);
		}
		
		strCount = !strcmp(regUser.strC, cmpBuffer) ? strCount+1 : strCount;
		
		fread(&regUser, sizeof(regUser), 1, fich);
	}
	
	printf("La cadena %s ha sido encontrada %d %s.", userStr, strCount, strCount != 1 ? "veces" : "vez");
	
	fclose(fich);
	
	
	return 0;
}
