#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MIDDLE 20

main(){
	int tables = 0, maxFactor = 0, acum = 0, result = 0, i = 0, j = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	//Pedimos por pantalla el número de tablas, comprobando que el dato introducido no sea menor a 0.
	printf("Introduce una numero de tablas (0 para terminar):\n");
	do{
		scanf("%d", &tables);
		fflush(stdin);		
	}while(tables < 0);
	
	//Controlamos que mientras la variable que indica el número de tablas sea mayor a 0 (es imposible que sea mayor a 0), haga las instrucciones contenidas
	while(tables > 0){
		//Pedimos por pantalla el tamaño de la tabla, comprobando que el dato introducido no sea menor a 1.
		printf("Introduce tamaño de la tabla:\n");
		do{
			scanf("%d", &maxFactor);
			fflush(stdin);		
		}while(maxFactor < 1);
<<<<<<< HEAD
		
		
		//Reiniciamos el acumulador
		acum = 0;	
=======
			
		//Reinicizamos el acumlador
		acum = 0;
>>>>>>> b4696242ba7c9c02e78e9b9e0cf152e1d67317f2
		//Controlamos a tabla de mutiplicar
		for(i = 1; i <= tables; i++){
			//Controlamos el tamaño de la tabla
			for(j = 1; j <= maxFactor; j++){
				result = i * j; //Obtenemos el resultado
				acum = acum + result; //Lo acumulamos
			
				printf("\n%d x %d = %d", i, j, result); //E imprimimos el resultado con su operacion por pantalla
			}
			printf("\n");
			//Añadimos la separación entre tablas
			for(j = 1; j <= MIDDLE; j++){
				printf("=");
			}
		}
		//Imprimimos por pantalla el resultado acumulado
		printf("\nResultado acumulado: %d\n", acum);
		
		system("pause");
		system("cls");
		
		//Pedimos por pantalla el numero de tablas, comprobando que el dato introducido no sea menor a 0.
		printf("Introduce una numero de tablas (0 para terminar):\n");
		do{
			scanf("%d", &tables);
			fflush(stdin);		
		}while(tables < 0);
	}
	
	printf("Fin del proceso\n");
	system("pause");
	
	return 0;
}
