#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MIDDLE 11

main(){
	int tables = 0, maxFactor = 0, acum = 0, result = 0, i = 0, j = 0;
	
	setlocale(LC_CTYPE, "Spanish");
	
	//Entrara una vez
	do{
		system("cls");
		
		//Pedimos por pantalla el numero de tablas, comprobando que el dato introducido no sea menor a 0.
		printf("Introduce una numero de tablas (0 para terminar):\n");
		do{
			scanf("%d", &tables);
			fflush(stdin);		
		}while(tables < 0);
		
		
		/*
			Comprobamos que la variable que controla la cantidad de tablas a imprimir sea 
			mayor a 0 (ya que menor es imposible), y asi nos evitamos hacer el proceso
			
		*/
		if(tables > 0){
			
			//Pedimos por pantalla tamaño de la tabla, comprobando que el dato introducido no sea menor a 1.
			printf("Introduce tamaño de la tabla:\n");
			do{
				scanf("%d", &maxFactor);
				fflush(stdin);		
			}while(maxFactor < 1);
			
			//Controlamos a tabla de mutiplicar
			for(i = 1; i <= tables; i++){
				//Controlamos el tamaño de la tabla
				for(j = 1; j <= maxFactor; j++){
					result = i * j;//Obtenemos el resultado
					acum = acum + result;//Lo acumulamos
					
					printf("\n%d x %d = %d", i, j, result);//E imprimimos el resultado con su operacion por pantalla
				}
				printf("\n");
				//Añadimos la separacion entre tablas
				for(j = 1; j <= MIDDLE; j++){
					printf("=");
				}
			}
			//Imprimimos por pantalla el resultado acumulado
			printf("\nResultado acumulado: %d", acum);
			
		}else{
			printf("Fin del proceso");
			
		}
		
		printf("\n");
		system("pause");
		
	}while(tables > 0);//Completara el bucle hasta el dato introducido en la variable que controla las tablas sea 0 (ya que menor de nuevo es imposible)
	
	return 0;
}
