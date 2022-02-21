/*
	Ficheros de texto

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
		
	Funciones escritura:
		fputc(char, nombre_int)	; [void]
		fputs(string, nombre_int); [void]
		
	Funciones lectura:
		char x = fgetc(nombre_int); [char]
		fgets(string, nChar, nombre_int); [void]
		
		
	Funciones extra:
		rename(fichOrig, fichReg); //Renombrar
		remove(fichero_ext); //Borrar
		
		
*/
#include <stdio.h>

#define TAM 11

#define desplz(n) ((long)(sizeof(cd1)) * (n-1))

main(){
	
	char c = ' ';
	char s[TAM] = "";
	
	FILE *fich;
	fich = fopen("fichero.txt", "w+");
	
	fputs("Primera\n", fich);
	fputs("Segunda\n", fich);
	fputs("Tercera\n", fich);
	
	rewind(fich);
	
	/*fgets(s, TAM, fich);
	while(!feof(fich)){
		printf("%s\n", s);
		fgets(s, TAM, fich);
	}*/
	
	c = fgetc(fich);
	while(!feof(fich)){
		printf("%c", c);
		c = fgetc(fich);		
	};
	
	fclose(fich);
	
	printf("Final de proceso");
	
	return 0;
}
