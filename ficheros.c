/*
	#include <stdio.h>
	
	main(){
		char carac = ' ';
		FILE *nombre_int;
		
		nombre_int = fopen(nombre_fich_ext, modo); //Apertura y asignacion a la vez
		
		
		//Escritura
		fputc(char, nombre_int); //Escribe un caracter en el fichero
		
		//Lectura
		carac = fgetc(nombre_int);
		
		
		fclose(nombre_int) //Cerrar Fichero
		
	}
	
	Modos de apertura:
		-	"r" : Lectura (read) [Debe de existir]
		-	"w" : Escritura (write) [Si existe, machaca el contenido, sino, lo crea]
		-	"a" : Añadir (add) [Si existe, escribe desde el final del fichero, sino, lo crea]
		-	"r+": Lectura-Escritura [Debe de existir]
		-	"w+": Lectura-Escritura [Te borra desde un principio el contenido, si no existe lo crea]
		-	"a+": Lectura-Añadir [Si existe, escribe desde el final del fichero, sino, lo crea]
		
*/
#include <stdio.h>

main(){
	FILE *fich;
	fich = fopen("fichero.txt", "r");
	
	fputc('&', fich);
	printf("%c", fgetc(fich));
	
	fclose(fich);
	
	return 0;
}
