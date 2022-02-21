#include <stdio.h>
#include <string.h>
#include <locale.h>

#define COLS 51
#define ROWS 3

main(){
	char names[ROWS][COLS];
	int i = 0, j = 0;
	
	setlocale(LC_ALL, "Spanish");
	
	for(i = 0; i < ROWS; i++){
		strcpy(names[i], "");
	}
	
	puts("Introduce nombre y apellido");
	for(i = 0; i < ROWS; i++){
		gets(names[i]);
	}
	
	puts("Introduce el índice de un nombre (<=0 para terminar): ");
	scanf("%d", &i);
	fflush(stdin);
	while(i > 0){
		if (i - 1 < ROWS)
			puts(names[i-1]);
		else
			puts("Posicion fuera de rango");
		
		puts("Introduce el índice de un nombre (0 para terminar): ");
		scanf("%d", &i);
		fflush(stdin);
	}
	
	memset()
	
	return 0;
}
