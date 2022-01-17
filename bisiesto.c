#include <stdio.h>
#include <locale.h>

int bisiesto(int year);
void proc_bisiesto(int year, int *flag);

main(){
	int year = 0;
	int flag = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	year = 2023;
	
	if(bisiesto(year))
		printf("El año %d es bisiesto\n", year);
	else
		printf("El año %d no es bisiesto\n", year);
	
	year++;
	proc_bisiesto(year, &flag);
	if(flag)
		printf("El año %d es bisiesto", year);
	else
		printf("El año %d no es bisiesto", year);
		
	return 0;
}

int bisiesto(int year){
	return year % 4 == 0;
}

void proc_bisiesto(int year, int *flag){
	*flag = year % 4 == 0;
}
