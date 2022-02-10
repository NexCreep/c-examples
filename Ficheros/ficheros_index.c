/*
	fseek(nombre_interno, desplamiento, origen) //Despues de abrirlo
						long nº_bytes
	
	Constantes de origen:
		0 -> SEEK_SET (Origen al principio del fichero)
		1 -> SEEK_CUR (Origen en la posicion del puntero actual)
		2 -> SEEK_END (Origen al final del fichero)
		
	Funciones extras:
		ftell(nombre_interno) -> long (Nos devuelve el tamaño en bytes desde el 
										principio del fichero hasta donde nos encontramos)
		
	
*/
#include <stdio.h>
#include <string.h>

#define TAM 50

#define desplz(n) ((long)(sizeof(cd1)) * (n-1))

int main(){
	struct cd{
		char nombre[TAM];
		char titulo[TAM];
		short numCanc;
	};
	
	struct cd cd1 = {"", "", 0};
	
	FILE *fich;
	
	fich = fopen("fichero.dat", "rb+");
	fseek(fich, desplz(2), SEEK_SET);
	
	strcpy(cd1.nombre, "Cambio 2");
	strcpy(cd1.titulo, "DiscoC 2");
	cd1.numCanc = 2;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	fseek(fich, desplz(2), SEEK_SET);
	
	fread(&cd1, sizeof(cd1), 1, fich);
	if(!feof(fich))
		printf("%s - %s - %d\n", cd1.nombre, cd1.titulo, cd1.numCanc);
		
	else
		printf("Final de fichero");
	

	fseek(fich, desplz(2), SEEK_CUR);
	
	strcpy(cd1.nombre, "CCambio 2");
	strcpy(cd1.titulo, "DiscoCC 2");
	cd1.numCanc = 22;
	fwrite(&cd1, sizeof(cd1), 1, fich);
	
	fseek(fich, desplz(0), SEEK_CUR);
	
	fread(&cd1, sizeof(cd1), 1, fich);
	if(!feof(fich))
		printf("%s - %s - %d\n", cd1.nombre, cd1.titulo, cd1.numCanc);
		
	else
		printf("Final de fichero");
		
	
	fclose(fich);
	
	return 0;
}

