/*
	struct tm{
		int tm_sec;
		int tm_min;
		int tm_hour;
		int tm_mdate; //1 al 31
		int tm_mon; //0 es enero, 0 al 11
		int tm_year; //Restarle 1900
		int tm_wday; //0 es lunes, 0 al 6
		int tm_yday; //0 al 365
		int tm_isdst; //0 verano - 1 invierno
	};

	Tipado: 
		time_t -> long
		
	Funciones:
		time(*arg) => void; //Fecha del dia
		ctime(*arg) => long; //Fecha del dia en string
		localtime(*arg) => struct *tm

*/

#include <stdio.h>
#include <time.h>

main(){
	time_t fecha = 0;
	time(&fecha);
	printf("%d", fecha);
	
	printf("%s", ctime(&fecha));
	
	return 0;
}
