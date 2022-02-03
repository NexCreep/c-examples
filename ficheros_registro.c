/*
	Ficheros de registro
	
	#include <stdio.h>
	
	main(){
		FILE *nombre_int;
		
		nombre_int = fopen(nombre_fich_ext, modo); //Apertura y asignacion a la vez		
		
		fclose(nombre_int) //Cerrar Fichero
		
	}
	
	Modos de apertura:
		-	"rb" : Lectura (read) [Debe de existir]
		-	"wb" : Escritura (write) [Si existe, machaca el contenido, sino, lo crea]
		-	"ab" : Añadir (add) [Si existe, escribe desde el final del fichero, sino, lo crea]
		-	"rb+": Lectura-Escritura [Debe de existir]
		-	"wb+": Lectura-Escritura [Te borra desde un principio el contenido, si no existe lo crea]
		-	"ab+": Lectura-Añadir [Si existe, escribe desde el final del fichero, sino, lo crea]
	
	Funciones de escritura:
		fwrite(&nombre_struct, tamaño, n_escribir, nombre_int);
		
	Funciones de lectura:
		fread(&nombre_struct, tamaño, n_escribir, nombre_int);
		
	Funciones adicionales:
		sizeof(); [obtiene el tamaño en bytes de una variable o literal]
		
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 50

main(){
	struct cd{
		char nombre[TAM];
	};
	
	struct cd cd1 = {""};
	
	return 0;
}
