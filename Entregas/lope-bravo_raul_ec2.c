#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	double a = 0, b = 0, c = 0, resA = 0, resB = 0;
	double part1 = 0, part2 = 0, part3 = 0, part4 = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	a = 4;
	b = 2;
	c = -6;
	
	part1 = -b;
	part2 = (pow(b,2))-(4*a*c);
	if (part2 > 0){
		part3 = sqrt(part2);
		part4 = 2 * a;
	
		resA = (part1 + part3)/part4;
		resB = (part1 - part3)/part4;
	
		printf("x1 = %f o x2 = %f", resA, resB);
	}else{
		printf("La ecuación tiene soluciones reales\n");
		printf("%.2f v| %.2f\n", part1, part2, part4);
		printf("------------\n");
		printf("      %.1f       ");
	}
	
	
	return 0;
}
