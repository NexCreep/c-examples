/*
	//Main fun
	Base: 8
	Altura: 7
	El área del triangulo de base 8 y altura 7 es (28)[another fun]
	
*/

#include <stdio.h>
#include <locale.h>

float area_triangulo(int b, int h);
int input_int(char out_help[]);

main(){
	int b = 0, h = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	b = input_int("Base: ");
	h = input_int("Altura: ");
	
	printf("El área del triangulo de base %d y altura %d es %.1f", b , h, area_triangulo(b, h));
	
	return 0;
}

float area_triangulo(int b, int h){
	return (float) b * h / 2;
}

int input_int(char out_help[]){
	int a = 0;
	
	do{
		printf("%s", out_help);
		scanf("%d", &a);
		fflush(stdin);
	}while(a <= 0);
	
	return a;
}
