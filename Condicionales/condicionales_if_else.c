#include <stdio.h>
#include <locale.h>
#define TAM 40

main(){
	char nombre[TAM] = "";
	char apellido[TAM] = "";
	unsigned short nota = 0;
	
	setlocale(LC_ALL, "es_ES");
	
	printf("Nombre alumno:\n");
	scanf("%s %s", nombre, apellido);
	fflush(stdin);
	
	printf("\nNota: ");
	scanf("%hd", &nota);
	fflush(stdin);
	
	if(nota >= 0){
		if(nota <= 2)
			printf("\n%s %s tiene un insuficiente", nombre, apellido);
		else{
			if(nota <= 4)
				printf("\n%s %s tiene un suspenso", nombre, apellido);
			else{
				if(nota == 5)
					printf("\n%s %s tiene un suficiente", nombre, apellido);
				else{
					if(nota == 6)
						printf("\n%s %s tiene un bien", nombre, apellido);
					else{
						if(nota <=8)
							printf("\n%s %s tiene un notable", nombre, apellido);
						else{
							if(nota <= 10)
								printf("\n%s %s tiene un sobresaliente", nombre, apellido);
							else
								printf("Valor fuera de rango");
						}
							
					}
				}
			}
		}
	}else
		printf("Valor fuera de rango");
	
	
	return 0;
}
