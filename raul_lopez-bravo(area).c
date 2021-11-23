#include <stdio.h>
#include <locale.h>

main(){
	int b = 0, h = 0;
	float result = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	printf("Base:\n");
	scanf("%d", &b);
	fflush(stdin);
	
	printf("Altura:\n");
	scanf("%d", &h);
	fflush(stdin);
	
	result = (float) (b * h)/ 2;
	printf("El área del triangulo de base %d y altura %d es %.2f", b, h, result);
	
	return 0;
}
