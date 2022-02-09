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
		-	"ab" : A�adir (add) [Si existe, escribe desde el final del fichero, sino, lo crea]
		-	"rb+": Lectura-Escritura [Debe de existir]
		-	"wb+": Lectura-Escritura [Te borra desde un principio el contenido, si no existe lo crea]
		-	"ab+": Lectura-A�adir [Si existe, escribe desde el final del fichero, sino, lo crea]
	
	Funciones de escritura:
		fwrite(&nombre_struct, tama�o, n_escribir, nombre_int);
		
	Funciones de lectura:
		fread(&nombre_struct, tama�o, n_escribir, nombre_int);
		
	Funciones adicionales:
		sizeof(); [obtiene el tama�o en bytes de una variable o literal]
		
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

main(){
	struct cd{
		char nombre[TAM];
		char titulo[TAM];
		short numCanc;
	};
	
	struct cd cd1 = {"", "", 0};
	
	FILE *fich;
	
	fich = fopen("fichero.dat", "wb+");
	
	strcpy(cd1.nombre, "Artista 1");
	strcpy(cd1.titulo, "Disco 1");
	cd1.numCanc = 9;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	strcpy(cd1.nombre, "Artista 2");
	strcpy(cd1.titulo, "Disco 2");
	cd1.numCanc++;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	strcpy(cd1.nombre, "Artista 3");
	strcpy(cd1.titulo, "Disco 3");
	cd1.numCanc++;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	strcpy(cd1.nombre, "Artista 4");
	strcpy(cd1.titulo, "Disco 4");
	cd1.numCanc++;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	strcpy(cd1.nombre, "Artista 5");
	strcpy(cd1.titulo, "Disco 5");
	cd1.numCanc++;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	strcpy(cd1.nombre, "Artista 6");
	strcpy(cd1.titulo, "Disco 6");
	cd1.numCanc++;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	rewind(fich);
	
	fread(&cd1, sizeof(cd1), 1, fich);
	while(!feof(fich)){
		printf("%s - %s - %d\n", cd1.nombre, cd1.titulo, cd1.numCanc);
		fread(&cd1, sizeof(cd1), 1, fich);
	}
	
	fclose(fich);
	
	return 0;
}
