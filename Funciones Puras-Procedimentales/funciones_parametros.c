#include <stdio.h>

void sumaNumVal(int num);
void sumaNumRef(int *num);

main(){
	int numero = 0;
	
	numero = 7;
	
	sumaNumVal(numero);
	printf("%d\n", numero);
	
	sumaNumRef(&numero);
	printf("%d\n", numero);
	
	return 0;
}

//Función Procedimental con parametro por valor
void sumaNumVal(int num){
	num = num + 1;
	printf("%d\n", num);
}

//Función Procedimental con parametro por referencia
void sumaNumRef(int *num){
	*num = *num + 1;
	printf("%d\n", *num);
}
