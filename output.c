#include <stdio.h>
#include <locale.h>

main(){
	//Init
	int num = 0, var = 0;
	float precio = 0;
	char letra = ' ';
	char nombre[7] = "Ana";
	
	setlocale(LC_CTYPE, "Spanish");
	
	//Init process
	num = 8; var = 7;
	precio = 2.6;
	letra = 'x';
	
	//Process
	/*
	Debe de imprimir por pantalla:
		El cuadrado de 8 es 64
		8 * 8 = 64
		8 unidades a 2.6€ son 20.80€
		Ana tiene 8 años
		La siguiente letra a x es la y
	*/
	
	//El cuadrado de 8 es 64
	printf("El cuadrado de %d es %d\n", num, num * num);
	
	//8 * 8 = 64
	printf("%d * %d = %d\n", num, num, num * num);
	
	//8 unidades a 2.6€ son 20.48€
	printf("%d unidades a %.1f euros son %.2f euros\n", num, precio, num * precio);
	
	//Ana tiene 8 años
	printf("%s tiene %d años\n", nombre, num);
	
	//La siguiente letra a x es la y
	printf("La siguiente letra a \"%c\" es la \"%c\"", letra, letra + 1);
	
	return 0;
}
