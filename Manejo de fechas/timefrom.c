#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define TAM 20

main(){
	time_t start = 0, now = 0, mod = 0;
	int s = 0, m = 0, h = 0;
	char timeS[TAM] = "", timeN[TAM] = "";
	struct tm dateN; 
	
	time(&start);
	strftime(timeS, TAM, "%H h %M m %S s", localtime(&start));
	
	
	
	while(1){
		time(&now);
		mod = now - start;
		s = (int)mod;
		if (s >= 60){
			m = s / 60;
			s = s % 60;
			if (m >= 60){
				h = h / 60;
				m = m % 60;
			}
		}
		
		strftime(timeN, TAM, "%M m %S s", localtime(&mod));
		
		printf("Empezo a las %s.\n", timeS);
		printf("Transcurrio %d h %d m %d s\n", h, m, s);
		system("timeout 1 > nul");
		system("cls");
	}
	
	return 0;
}
