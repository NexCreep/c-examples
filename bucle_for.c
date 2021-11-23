#include <stdio.h>

main(){
	int i = 0;
	
	printf("For\n\n");
	
	//for(inicializacion; mientras se cond; incremento)
	for(i = 1; i <= 10; i = i + 1)
		printf("%d\n", i);
	
	return 0;
}
