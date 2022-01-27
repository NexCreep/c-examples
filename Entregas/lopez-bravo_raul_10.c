/*
	Haz una funcion que a partir de dos cadenas, obtenga el numero de veces que una cadena que esta en otra
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 12

int strinstr(char string[], char substring[]);

main(){
	int c = 0;
	char userStr[TAM] = "", userSubStr[TAM] = "";
	
	setlocale(LC_ALL, "es_ES");
	
	printf("Introduce una cadena (max %d caracteres): ", TAM-1);
	gets(userStr);
	printf("Introduce una subcadena (max %d caracteres): ", TAM-1);
	gets(userSubStr);
	
	c = strinstr(userStr, userSubStr);
	
	printf("La subcadena \"%s\" aparece %d %s en la cadena \"%s\".\n",userSubStr, c, c == 1 ? "vez" : "veces", userStr);
	
	printf("Fin de proceso");
	return 0;
}

int strinstr(char string[], char substring[]){
	char cmpString[] = "";
	int i = 0, j = 0;
	int c = 0; 
	int stringLn = 0 /*Si se quita esta variable el programa deja de funcionar y eso que no se utiliza en ningún momento*/;
	
	c = 0;
	for (i=0; i < strlen(string); i++){
		j = 0;
		while(j < strlen(substring) && string[j+i] != '\0'){
			strncat(cmpString, &string[j+i], 1);
			j++;
		};
		if(!strcmp(cmpString, substring)) 
			c++;
		
		strcpy(cmpString, "");
	};
	
	return c;
}

