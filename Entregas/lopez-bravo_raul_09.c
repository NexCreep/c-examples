#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 10

void moreDigit(int array[], int *result);
void locateDigInt(int array[], int digit, int *result);
void locateDigStr(int array[], int digit, char result[]);

main(){
	int arrayInt[TAM] = {0, 0, 9, 4, 1, 2, 2, 2, 7, 0};
	int r = 0;
	char rstr[5]="";
	int digit = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	moreDigit(arrayInt, &r);
	printf("El digito que se repite más es en el array es %d\n", r);
	
	printf("Introduce un digito a buscar:\n");
	scanf("%d", &digit);
	fflush(stdin);
	
	r=0;
	locateDigInt(arrayInt, digit, &r);
	if(r)
		printf("%d se encuentra en el array\n", digit);
	else
		printf("%d no se encuentra en el array\n", digit);
		
	locateDigStr(arrayInt, digit, rstr);
	printf("(%s)\n\n")
	if(!strcmp(rstr, "uno"))
		printf("%d se encuentra en el array", digit);
	else
		printf("%d no se encuentra en el array", digit);
	
	return 0;
}

void moreDigit(int array[], int *result){
	int more = 0, morecont = 0, cont = 0;
	
	int i = 0, j = 0;
	
	more = array[0];
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(array[j] == array[i])
				cont++;
		}
		if(morecont < cont){
			morecont = cont;
			more = array[i];
		}
		cont = 0;
	}
	
	*result = more;
}

void locateDigInt(int array[], int digit, int *result){
	int i = 0, flag = 0;
	
	i=0;
	flag = 0;
	while(i < TAM && !flag){
		if(array[i] == digit)
			flag = 1;
		i++;
	}	

	*result = flag;
}

void locateDigStr(int array[], int digit, char result[]){
	int i = 0;
	char flag[5]="";
	
	i=0;
	strcpy(flag, "cero");
	while(i < TAM && strcmp(flag, "cero")){
		if(array[i] == digit)
			strcpy(flag, "uno");
		i++;
	}	

	strcpy(result, flag);
}

////////////////////////////////
/*
int strlen(const char *str){
	const char *s;
	for(s = str; *s; s++);
	
	return (s - str);
}
*/
