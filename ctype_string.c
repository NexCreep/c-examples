/*
Cadena de maximo 50 caracterees muestra
	Digitos:
	Minusculas:
	Mayusculas:
	Espacios:
	Simbolos:
	Alfanumericos:

E indica si es un palindromo (capicúa) [f Pura]
Luego pide otra cadena e indica si es una subcadena la de la primera [f procedimental]
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int isCapicua(char string[]);

#define TAM 51

main(){
	char cadena[TAM] = "";
	char caracter = ' ';
	int i = 0;
	int dig = 0, low = 0, upp = 0, spa = 0, sym = 0, alph = 0;
	
	setlocale(LC_ALL, "Spanish");
	
	printf("Introduce una cadena: \n");
	gets(cadena);
	
	
	for(i = 0; i < strlen(cadena); i++){
		caracter = cadena[i];
		
		dig = isdigit(caracter) ? dig + 1 : dig;
		low = islower(caracter) ? low + 1 : low;
		upp = isupper(caracter) ? upp + 1 : upp;
		spa = isspace(caracter) ? spa + 1 : spa;
		sym = ispunct(caracter) ? sym + 1 : spa;
		alph = isalnum(caracter) ? alph + 1 : alph;
		
		
	}
	if(dig)
		printf("Digitos: %d\n", dig);
	
	if(low)
		printf("Minúsculas: %d\n", low);
	
	if(upp)
		printf("Mayúsculas: %d\n", upp);
	
	if(spa)	
		printf("Espacios: %d\n", spa);
	
	if(sym)
		printf("Simbolos: %d\n", sym);
	
	if(alph)
		printf("Alfanuméricos: %d\n", alph);
		
	printf("%d", isCapicua(cadena));
	
	return 0;
}

int isCapicua(char string[]){
	printf("%s", string);
	
	return strcmp(strrev(string), string);
}
