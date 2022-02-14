#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TXT 50
#define posP(str) ((long)(-sizeof(str)))
#define deplz(n) ((long)(sizeof(file1) * (n-1)))

main(){
	int i = 0;
	char charI[TXT] = "";
	char text[TXT] = "";
	char sample[TXT] = "";
	
	struct file{
		char num[TXT];
	};
	
	strcpy(sample, "\nSuma: 0");
	
	struct file file1 = {""};
	
	FILE *fich;
	

	fich = fopen("text.txt","w");
	
	strcpy(file1.num, "Numero: X");
	fwrite(file1.num, sizeof(file1), 1, fich);
	strcpy(file1.num, "\nNumero: X");
	fwrite(file1.num, sizeof(file1), 1, fich);
	strcpy(file1.num, "\nNumero: X");
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, "\nSuma: 0");
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	strcpy(file1.num, "\nNumero: X");
	fwrite(file1.num, sizeof(file1), 1, fich);
	strcpy(file1.num, "\nNumero: X");
	fwrite(file1.num, sizeof(file1), 1, fich);
	fclose(fich);
	
	
	fich = fopen("text.txt", "r+");
		
	fread(&file1, sizeof(file1), 1, fich);
	gets(charI);
	while(!feof(fich) && strcmp(sample, file1.num)){
		printf("%s", file1.num);
		gets(charI);
		fread(&file1, sizeof(file1), 1, fich);
	}
	
	fseek(fich, deplz(0), SEEK_CUR);
	
	memset(file1.num, ' ', sizeof(file1.num));
	strcpy(file1.num, "Suma: ");
	itoa(10, charI, 10);
	strcat(file1.num, charI);
	fwrite(file1.num, sizeof(file1), 1, fich);
	
	fclose(fich);
	
	return 0;
}

