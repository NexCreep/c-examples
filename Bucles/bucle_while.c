#include <stdio.h>

#define MAX 10

main(){
	int i = 0;
	
	printf("While\n\n");
	i = 1;
	//while(cond)
	while (i<=MAX){
		printf("%d ", i);
		i = i + 1;
	}
	
	
	printf("\n\nDo while\n\n");
	i = 1;
	//do{instrucciones}while(cond);
	do{
		printf("%d ", i++);
	}while (i<=MAX);
	
	
	printf("\n\nFor\n\n");
	//for(inicializacion; mientras se cond; incremento)
	for(i = 1; i <= MAX; i = i + 1)
		printf("%d ", i);
	
	return 0;
}
