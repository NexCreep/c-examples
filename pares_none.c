#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 6
#define randomize (srand(time(NULL)))
#define random(n) (rand() % n)

main(){
	int user_num = 0, cpu_num = 0, suma = 0;
	char user_opt[TAM] = "";
	
	setlocale(LC_ALL, "Spanish");
	
	randomize;
	
	do{
		printf("Elige, ¿pares o nones?: ");
		gets(user_opt);
		
	}while(strcmp(user_opt, "pares") && strcmp(user_opt, "nones"));
	
	do{
		printf("Elige cuantos dedos de una mano vas a sacar: ");
		scanf("%d", &user_num);
		fflush(stdin);
		
	}while(user_num < 0 || user_num > 5);
	
	cpu_num = random(10);
	
	suma = cpu_num + user_num;
	
	printf(" \nTú has elegido %d y la máquina %d. La suma es %d con lo que... ", user_num, cpu_num, suma);
	if((suma % 2 == 0 && !strcmp(user_opt, "pares")) || (suma % 2 != 0 && !strcmp(user_opt, "nones")))
		printf("HAS GANADO");
	else
		printf("HAS PERDIDO");
		
	
	return 0;
}
