/*
Código: A375
Salario: 3000.75
Empleado con código A375:
	Salario actual: 3000.75
	Salario nuevo: xxxxx
¿Desea introducir otro empleado? (S/N): _

///
-----------
0 a 1000 -- 20%
>1000 a 3000 -- 10%
>3000 a 5000 -- 5%
>5000		-- 2%
-----------
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define MIN_ACCEP 0

#define COD_TAM 5

#define RANGE_A 1000
#define RANGE_B 3000
#define RANGE_C 6000

#define PER_RANGE_A 20
#define PER_RANGE_B 10
#define PER_RANGE_C 5
#define PER_RANGE_OUT 2

main(){
	char cod[COD_TAM] = "";
	char exit = ' ';
	float sal = 0, cantAum = 0, salNew = 0;
	short aumPor = 0;
	
	setlocale(LC_ALL, "Spanish");
	
	do{
		system("cls");
		
		printf("Código: ");
		scanf("%s", cod);
		fflush(stdin);
	
		do{
			printf("\nSalario: ");
			scanf("%f", &sal);
			fflush(stdin);
		}while(sal < MIN_ACCEP);
		
		if(sal <= RANGE_A)
			aumPor = PER_RANGE_A;
		else{
			if(sal <= RANGE_B)
				aumPor = PER_RANGE_B;
			else{
				if(sal <= RANGE_C)
					aumPor = PER_RANGE_C;
				else{
					aumPor = PER_RANGE_OUT;
				}
			}
		}
		
		cantAum = aumPor * sal / 100;
		salNew = sal + cantAum;
		
		printf("\nEmpleado con código %s :", cod);
		printf("\n\tSalario actual: %.2f", sal);
		printf("\n\tSalario nuevo: %.2f", salNew);
		
		do{
			printf("\n¿Desea introducir otro empleado? (S/N): ");
			scanf("%c", &exit);
			fflush(stdin);
		}while(exit != 'S' && exit != 's' && exit != 'N' && exit != 'n');
			
			
	}while(exit == 'S' || exit == 's');
	
	
	return 0;
}
