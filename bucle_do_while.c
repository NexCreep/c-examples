#include <stdio.h>

main(){
	int i = 0;
	
	printf("Do while\n\n");
	
	i = 1;
	//do{instrucciones}while(cond);
	do{
		printf("%d\n", i);
		i++;
	}while (i<=10);
	
	return 0;
}
