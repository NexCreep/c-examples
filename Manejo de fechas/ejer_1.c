/*
	Calcula la diferencia entre dos dias
*/

#include <stdio.h>
#include <time.h>

#define mon(n) (n-1)
#define year(n) (n-1900)

main(){
	struct tm fecha1;
	struct tm fecha2;
	struct tm *dif;
	
	time_t nFecha1 = 0;
	time_t nFecha2 = 0;
	time_t ndif = 0;
	
	time(&nFecha2);
	
	fecha1.tm_mday = 8;
	fecha1.tm_mon = mon(4);
	fecha1.tm_year = year(2001);
	
	fecha1.tm_hour = 0;
	fecha1.tm_min = 0;
	fecha1.tm_sec = 0;
	
	nFecha1 = mktime(&fecha1);
	
	ndif = nFecha2 - nFecha1;
	dif = localtime(&ndif);
	
	printf("Queda %d - %d", nFecha2, nFecha1);
	
	
	return 0;
}
