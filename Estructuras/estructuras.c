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
	//Declaración de tipo
	struct fecha {
		short dia;
		short mes;
		short y;
	};
	
	struct cd {
		char nomGrupo[25];
		char nomCD[20];
		struct fecha fechaCD;
		int numSong;
	};
	
	// Declaración e inicialización de la variable
	struct cd cd1 = {"", "", {1, 1, 1999}, 0}, cd2;
	cd2 = cd1;
	
	cd1.numSong = 3;
	cd1.fechaCD.dia = 26;
	cd1.fechaCD.mes = 1;
	cd1.fechaCD.y = 2021;
	
	printf("%d \n", cd1.numSong);
	printf("%d \n", cd2.numSong);
	
	return 0;
}
