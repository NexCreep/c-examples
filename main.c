//Importaciones
#include <stdio.h>
#include <locale.h>

//Constantes
#define REM 210

//Ejecución
int main(){
	char name[REM] = " ";
	
	setlocale(LC_ALL, "es_ES");
	
	scanf("%s", name);
	fflush(stdin);
	
	printf("Es %s", name);
							
	return 0;
}
