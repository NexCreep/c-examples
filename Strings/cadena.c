#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 50

main() {
	
	char cadena1[TAM] = "", cadena2[TAM] = "";
	int cmpStr = 0;
	
	setlocale(LC_ALL, "Spanish");
	
	printf("Introduce dos palabras: \n");
	gets(cadena1);
	gets(cadena2);
	
	cmpStr = strcmp(cadena1, cadena2);
	
	if(!cmpStr)
		printf("%s = %s", cadena1, cadena2);
	else{
		if(cmpStr > 0)
			printf("%s > %s", cadena1, cadena2);
		else
			printf("%s < %s", cadena1, cadena2);
	}

	return 0;
}
