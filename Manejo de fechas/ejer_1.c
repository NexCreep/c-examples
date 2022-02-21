/*
	Calcula la diferencia entre dos dias
*/

#include <stdio.h>
#include <time.h>
#include <locale.h>

#define mon(n) (n-1)
#define year(n) (n-1900)

long askDate();

main(){
	struct usertime{
		int sec;
		int min;
		int h;
		int day;
		int mon;
		int year;
	};
	
	struct usertime ustime = {0,0,0,0,0,0};
	struct tm *dif;
	
	time_t nFecha1 = 0, nFecha2 = 0, ndif = 0;
	
	setlocale(LC_ALL, "Spanish");
	
	printf("Fecha Inicial: \n");
	nFecha1 = askDate();
	
	printf("Fecha Final: \n");
	nFecha2 = askDate();
	
	ndif = nFecha2 - nFecha1;
	
	ustime.min = ndif / (time_t)60;
	ustime.sec = ndif % (time_t)60;
	if (ustime.min >= 60){
		ustime.h = ustime.min / 60;
		ustime.min = ustime.min % 60;
		if (ustime.h >= 24){
			ustime.day = ustime.h / 24;
			ustime.h = ustime.h % 24;
		}
	}
	
	printf("Queda %d días.", ustime.day, ustime.h);
	
		
	return 0;
}

long askDate(){
	struct tm date;
	int input = 0;
	
	
	printf("\tDía: ");
	scanf("%d", &input);
	fflush(stdin);
	date.tm_mday = input;
	
	printf("\tMes: ");
	scanf("%d", &input);
	fflush(stdin);
	date.tm_mon = mon(input);
	
	printf("\tAño: ");
	scanf("%d", &input);
	fflush(stdin);
	date.tm_year = year(input);
	
	date.tm_hour = 0;
	date.tm_min = 0;
	date.tm_sec = 0;
	
	return mktime(&date);
	
}
