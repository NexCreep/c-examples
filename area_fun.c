/*
	//Main fun
	Base: 8
	Altura: 7
	El área del triangulo de base 8 y altura 7 es (28)[another fun]
	
*/

#include <stdio.h>
#include <locale.h>

float area_triangulo(int b, int h);

main(){
	int b = 0, h = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	printf("Base: ");
	scanf("%d", &b);
	fflush(stdin);
	
	printf("Altura: ");
	scanf("%d", &h);
	fflush(stdin);
	
	printf("El área del triangulo de base %d y altura %d es %.1f", b , h, area_triangulo(b, h));
	
	return 0;
}

float area_triangulo(int b, int h){
	return (float) b * h / 2;
}
