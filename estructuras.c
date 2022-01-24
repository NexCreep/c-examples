/*
	Las estruccturas son un tipo de dato que va a definir una usuario
	Se componen de varios datos
	Cada una sera diferente
	
	struct estructura{
		tipo_miembro nombre_miembro;
		tipo_miembro nombre_miembro;
		...
	};
*/
#include <stdio.h>


main(){
	struct cd {
		char nomGrupo[25];
		char nomCD[20];
		char fecha[11];
		int numSong;
	};
	
	struct cd cd1 = {"", "", "", 0};
	struct cd cd2 = {"", "", "", 0};
	
	cd1.numSong = 3;
	cd2.numSong = 5;
	
	printf("%d \n", cd1.numSong);
	printf("%d \n", cd2.numSong);
	
	return 0;
}
