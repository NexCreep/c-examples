#include <stdio.h>

#define MIN 2
#define MAX 20

main(){
	short height = 0, i = 0, j = 0;
	
		
	do{
		printf("Introduce una altura (%d-%d): ", MIN, MAX);
		scanf("%hd", &height);
		fflush(stdin);
	}while (height < MIN || height > MAX);
	
	
	for(i = 1; i <= height; i++){
		for(j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
