#include <stdio.h>

int suma1(int a, int b);
void suma2();
int input_int();

main(){
	int mainA= 0, mainB = 0, suma = 0;
	
	mainA = 5; mainB = 65;
	
	printf("%d \n", suma1(mainA, mainB));
	
	suma2();
	
	return 0;
} 

int suma1(int a, int b){
	return a + b;
}

void suma2(){
	int a = 0, b = 0;
	
	a = input_int();
	b = input_int();
	
	printf("%d", a + b);
	
	return;
}

int input_int(){
	int input = 0;
	
	scanf("%d", &input);
	fflush(stdin);
	
	return input;
}
