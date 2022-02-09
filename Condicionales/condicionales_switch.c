#include <stdio.h>
#include <locale.h>
#define TAM_NOMBRE 16
#define TAM_APELLIDO 26

main(){
	char nombre[TAM_NOMBRE] = "";
	char apellido[TAM_APELLIDO] = "";
	unsigned short nota = 0;
	
	setlocale(LC_ALL, "es_ES");
	
	printf("Nombre alumno:\n");
	scanf("%s %s", nombre, apellido);
	fflush(stdin);
	
	printf("\nNota: ");
	scanf("%hd", &nota);
	fflush(stdin);
	
	switch (nota){
		case 0:
		case 1:
		case 2:
			printf("\n%s %s tiene un insuficiente", nombre, apellido);
			break;
		case 3:
		case 4:
			printf("\n%s %s tiene un suspenso", nombre, apellido);
			break;
		case 5:
			printf("\n%s %s tiene un suficiente", nombre, apellido);
			break;
		case 6:
			printf("\n%s %s tiene un bien", nombre, apellido);
			break;
		case 7:
		case 8:
			printf("\n%s %s tiene un notable", nombre, apellido);
			break;
		case 9:
		case 10:
			printf("\n%s %s tiene un sobresaliente", nombre, apellido);
			break;
		default:
			printf("\nValor de la nota de %s fuera de rango", nombre, apellido);
			break;
	}
	
	return 0;
}
