/*
	empleado
		nombre[20]
		edad
		altura
		fechaNac
			año
			mes
			dia
			
	Solicita los datos del empleado y rellena la estructura

*/
#include <stdio.h>
#include <locale.h>

#define NAMETAM 21
#define ARRAYTAM 5

main(){
	struct bithDateStruct{
		short year;
		short month;
		short day;
	};
	struct employee{
		char name[NAMETAM];
		short age;
		float height;
		struct bithDateStruct birthDate;
	};
	
	
	struct employee em1 = {"", 0, 0, {0, 0, 0}};
	struct employee emArray[ARRAYTAM];
	int i = 0;
	
	for(i=0; i < ARRAYTAM; i++){
		emArray[i] = em1;
	}
	
	setlocale(LC_CTYPE, "Spanish");
	
	printf("Introduce el nombre del empleado: \n");
	gets(em1.name);
	
	printf("Introduce los años del empleado: ");
	scanf("%hd", &em1.age);
	fflush(stdin);
	
	printf("Introduce la altura del empleado: ");
	scanf("%.f", &em1.height);
	fflush(stdin);
	
	printf("Introduce la fecha de nacimiento del empleado separado por espacios (y-m-d): ");
	scanf("%hd %hd %hd", &em1.birthDate.year, &em1.birthDate.month, &em1.birthDate.day);
	fflush(stdin);
	
	printf("\n\nNombre: %s \nEdad: %hd \nAltura: %.2f \nFecha de nacimiento: %hd/%hd/%hd", 
	em1.name, em1.age, em1.height, em1.birthDate.year, em1.birthDate.month, em1.birthDate.day);
	
	emArray[0] = em1;
	
	printf("\n\n%s", emArray[0].name);
	
	
	return 0;
}

