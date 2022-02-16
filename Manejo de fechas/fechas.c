/*
	struct tm{
		int tm_sec;
		int tm_min;
		int tm_hour;
		int tm_mdate; //1 al 31
		int tm_mon; //0 es enero, 0 al 11
		int tm_year; //Restarle 1900
		int tm_wday; //0 es domingo, 0 al 6
		int tm_yday; //0 al 365
		int tm_isdst; //0 verano - 1 invierno
	};

	Tipado: 
		time_t -> long
		
	Funciones:
		time(time_t &arg) => void; //Fecha del dia
		ctime(time_t &arg) => string; //Fecha del dia en string
		localtime(time_t &arg) => struct *tm; //Apartir de un time_t se saca la fecha en string
		asctime(struct *tm arg) => string; //Apartir de un struct *tm se saca la fecha en string
		mktime(struct tm &arg) => time_t; //A partir de un struct tm te crea una fecha

*/

#include <stdio.h>
#include <time.h>

#define mon(n) (n-1)
#define year(n) (n-1900)

main(){
	struct tm *fechaS;
	struct tm fecha1;
	time_t nfecha1 = 0;
	time_t fecha = 0;
	
	time(&fecha);
	printf("%d\n", fecha);
	
	printf("%s", ctime(&fecha));
	
	fechaS = localtime(&fecha);
	printf("%s", asctime(fechaS));
	
	fecha1.tm_mday = 8;
	fecha1.tm_mon = mon(4);
	fecha1.tm_year = year(2022);
	
	fecha1.tm_hour = 0;
	fecha1.tm_min = 0;
	fecha1.tm_sec = 0;
	fecha1.tm_isdst = 0;
	
	nfecha1 = mktime(&fecha1);
	
	printf("%s", ctime(&nfecha1));
	printf("%s", asctime(localtime(&nfecha1)));
	
	printf("%d - %d", fecha1.tm_wday, fecha1.tm_yday);
	
	return 0;
}
