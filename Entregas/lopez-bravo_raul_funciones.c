#include <stdio.h>
#include <locale.h>

int inputPosInt();
int maxTwoInt(int num1, int num2);
void printMaxTwoInt();

/*EJERCICIO 4*/
main(){
	setlocale(LC_CTYPE, "Spanish");
	
	printMaxTwoInt();
	
	return 0;
}

/*FUNCIONES PURAS*/
/*EJERCICIO 1*/
int inputPosInt(){
	int num = 0;
	
	do{
		printf("Introduce un número positivo: ");
		scanf("%d", &num);
		fflush(stdin);
		
	}while(num <= 0);
	
	return num;
}
/*EJERCICIO 2*/
int maxTwoInt(int num1, int num2){
	int max = 0;
	
	max = num1 >= num2 ? num1 : num2;
	
	return max;
}

/*FUNCIONES PROCEDIMENTALES*/
/*EJERCICIO 3*/
void printMaxTwoInt(){
	
	printf("NÚMERO MAYOR = %d\n", maxTwoInt(inputPosInt(), inputPosInt()));
	
	return;
}
