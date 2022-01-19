#include <stdio.h>
#include <locale.h>

int bisiesto(int year);
void proc_bisiesto(int year, int *flag);

main(){
	int year = 0;
	int flag = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	year = 2023;
	
	printf("El año %d %s", year, (bisiesto(year) ? "si es bisiesto" : "no es bisiesto"));
	
	year++;
	
	proc_bisiesto(year, &flag);
	printf("\nEl año %d %s", year, (flag ? "si es bisiesto" : "no es bisiesto"));

	return 0;
}

int bisiesto(int year){
	return year % 4 == 0;
}

void proc_bisiesto(int year, int *flag){
	*flag = year % 4 == 0;
}
