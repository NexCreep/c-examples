/*
	strftime(buffer, longitud, cadenaControl, struct tm *fecha);
*/

#include <stdio.h>
#include <time.h>
#include <locale.h>

#define TAM 50

main(){
	char buffer[TAM] = "";
	time_t now = 0;
	
	while(1){	
		time(&now);
		strftime(buffer, TAM, "%H:%M:%S", localtime(&now));
		system("cls");
		printf("%s", buffer);
	}
	
	return 0;
}
