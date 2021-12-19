#include <stdio.h>

int inputPosInt();
int maxTwoInt(int num1, int num2);
void printMaxTwoInt();

main(){
	int num1 = 0, num2 = 0;
	
	num1 = inputPosInt();
	num2 = inputPosInt();
	
	printf("NUMERO MAYOR = %d\n\n", maxTwoInt(num1, num2));
	
	printMaxTwoInt();
	
	return 0;
}

/*FUNCIONES PURAS*/
int inputPosInt(){
	int num = 0;
	
	do{
		printf("Introduce un numero positivo: ");
		scanf("%d", &num);
		fflush(stdin);
		
	}while(num <= 0);
	
	return num;
}

int maxTwoInt(int num1, int num2){
	if (num1 >= num2)
		return num1;
	else
		return num2;
	
}

/*FUNCIONES PROCEDIMENTALES*/
void printMaxTwoInt(){
	int num1 = 0, num2 = 0;
	
	num1 = inputPosInt();
	num2 = inputPosInt();
	
	printf("NUMERO MAYOR = %d\n\n", maxTwoInt(num1, num2));
	
}
