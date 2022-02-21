/*
	Calcula fecha futura dentro de x dias

	Días futuros: 227
	Dentro de 277 días la fecha sera X
*/

#include <stdio.h>
#include <time.h>
#include <locale.h>

#define mon(n) (n-1)
#define year(n) (n-1900)

main(){
	long userDay = 0;
	struct userdate{
		int sec;
		int min;
		int h;
		int day;
		int mon;
		int year;
	};
	
	setlocale(LC_ALL, "Spanish");
	
	printf("Días futuros: ");
	scanf("%d", &userDay);
	fflush(stdin);
	
	
	
	return 0;
}

long getTime(long days){
	int sec = 0;
	
	sec = days * 24 * 60 * 60;
	
	return
}
