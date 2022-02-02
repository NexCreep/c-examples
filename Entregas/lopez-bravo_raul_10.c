/*
	Haz una funcion que a partir de dos cadenas, obtenga el numero de veces que una cadena que esta en otra
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 12

int strinstr(char string[], char substring[]);

main(){
	int cant = 0;
	char userStr[TAM] = "", userSubStr[TAM] = "";
	
	setlocale(LC_ALL, "es_ES");
	
	printf("Introduce una cadena (max %d caracteres): ", TAM-1);
	gets(userStr);
	
	printf("Introduce una subcadena (max %d caracteres): ", TAM-1);
	gets(userSubStr);
	
	
	cant = strinstr(userStr, userSubStr);
	
	printf("La subcadena \"%s\" aparece %d %s en la cadena \"%s\".\n",userSubStr, cant, cant == 1 ? "vez" : "veces", userStr);
	
	printf("Fin de proceso");
	return 0;
}

int strinstr(char string[], char substring[]){
	char cmpString[TAM] = "";
	int i = 0, j = 0, k = 0;
	int c = 0;
	
	c = 0;
	for (i=0; i < strlen(string); i++){
		j = 0;
		k = j + i;
		while(j < strlen(substring) && string[k] != '\0'){
			strncat(cmpString, &string[k], 1);
			j++;
			k = j + i;
		};
		if(!strcmp(cmpString, substring)) 
			c++;
		
		strcpy(cmpString, "");
	};
	
	return c;
}

