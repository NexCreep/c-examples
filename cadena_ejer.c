#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 51
#define CANT 5

main(){
	char names[CANT][TAM];
	char name[TAM] = "";
	int i = 0, j = 0;
	
	setlocale(LC_ALL, "Spanish");
	
	for(i = 0; i < CANT; i++){
		for(j = 0; j < TAM; j++){
			names[i][j] = ' ';
		}
	}
	
	puts("Introduce nombre y apellido");
	for(i = 0; i < CANT; i++){
		gets(names[i]);
	}
	
	puts("Introduce el índice de un nombre: ");
	scanf("%d", &i);
	fflush(stdin);
	while(i > 0){
		puts(names[i-1]);
		
		puts("Introduce el índice de un nombre: ");
		scanf("%d", &i);
		fflush(stdin);
	}
	
	return 0;
}
