/*
	Grupo A: Manchester City, PSG
	Grupo B: Liverpool, Átletico de Madrid
	Grupo C: Ajax, Sporting Lisboa
	Grupo D: Real Madrid, Inter
	Grupo E: Bayern, Benfica
	Grupo F: Manchester United, Villareal
	Grupo G: LOSC, RB Satzlburg
	Grupo H: Juventus, Chelsea
	
	Emparejamiento el 1º de su grupo con el 2º de otro grupo
		- No pueden ser de mismo pais
*/
#include <stdio.h>

#define TAM 12

main(){
	int i = 0;
	char name[TAM] = "";
	int array[TAM];
	
	for(i = 0; i < TAM; i++){
		array[i] = 0;
	}
	
	
	scanf("%s", name);
	fflush(stdin);
	
	printf("%s", name);
	
	return 0;
}
