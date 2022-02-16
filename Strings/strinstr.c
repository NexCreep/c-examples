#include <stdio.h>
#include <string.h>

int strinstr(const char string[], const char substr[]);

main(){
	
	strinstr("Hola", "la");
	
	return 0;
}

int strinstr(const char string[], const char substr[]){
	int c = 0, p = 0;
	
	
	if(strlen(string) > 0 && strlen(substr) > 0){
		for(p=0; p<strlen(string); p++){
			if (p <= strlen(substr)){
				printf("%s\n", string+p);
			}	
		}
	}
	
	return c;
}
