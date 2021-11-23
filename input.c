#include <stdio.h>
#include <locale.h>
//Constantes
#define TAM 7

main(){
	int num = 0;
	float precio = 0;
	char letra = ' ';
	char nombre[TAM] = " ";
	
	setlocale(LC_CTYPE, "Spanish");
	
	printf("Numero Entero: ");
	scanf("%d", &num);
	fflush(stdin);
	
	printf("\nPrecio: ");
	scanf("%f", &precio);
	fflush(stdin);
	
	printf("\nLetra: ");
	scanf("%c", &letra);
	fflush(stdin);
	
	printf("\nNombre: ");
	scanf("%s", nombre);
	fflush(stdin);
	
	//El cuadrado de 8 es 64
	printf("\nEl cuadrado de %d es %d\n", num, num * num);
	
	//8 * 8 = 64
	printf("%d * %d = %d\n", num, num, num * num);
	
	//8 unidades a 2.6€ son 20.48€
	printf("%d unidades a %.2f euros son %.2f euros\n", num, precio, num * precio);
	
	//Ana tiene 8 años
	printf("%s tiene %d años\n", nombre, num);
	
	//La siguiente letra a x es la y
	printf("La siguiente letra a \"%c\" es la \"%c\"", letra, letra + 1);
	
	
	return 0;
}
