#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TXT 50
#define posP(str) ((long)(-sizeof(str)))

main(){
	int i = 0;
	char charI[TXT];
	char text[TXT];
	
	FILE *fich;
	

	fich = fopen("text.txt","w");
	fputs("Numero: X\n", fich);
	fputs("Numero: X\n", fich);
	fputs("Suma: 0 \n", fich);
	fputs("Numero: X\n", fich);
	fputs("Numero: X\n", fich);
	fclose(fich);
	
	
	fich = fopen("text.txt", "r+");
		
	fgets(text, TXT, fich);
	while(!feof(fich) && strcmp("Suma: 0 \n", text)){
		printf("%s", text);
		gets(charI);
		fgets(text, TXT, fich);
	}
	
	fseek(fich, posP("Suma: 0 \n"), SEEK_CUR);
	fputs("Suma: ", fich);
	itoa(10, charI, 10);
	fputs(charI, fich);
	fputs("\n", fich);
	fclose(fich);
	
	return 0;
}

