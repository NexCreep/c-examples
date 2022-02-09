/*
	fseek(nombre_interno, desplamiento, origen) //Despues de abrirlo
						long nº_bytes
	
	Constantes de origen:
		0 -> SEEK_SET (Origen al principio del fichero)
		1 -> SEEK_CUR ()
		2 -> SEEK_END (Origen al final del fichero)
	
*/
#include <stdio.h>
#include <string.h>

#define TAM 50

#define desplz(n) (sizeof(cd1) * (n - 1))

main(){
	struct cd{
		char nombre[TAM];
		char titulo[TAM];
		short numCanc;
	};
	
	struct cd cd1 = {"", "", 0};
	
	FILE *fich;
	
	fich = fopen("fichero.dat", "rb+");
	fseek(fich, desplz(4), SEEK_SET);
	
	strcpy(cd1.nombre, "Cambio 4");
	strcpy(cd1.titulo, "Disco 4");
	cd1.numCanc = 4;
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
