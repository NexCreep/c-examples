#include <stdio.h>
#include <stdlib.h>

int strlenC(int intarray[]);

main(){
	int arrayInt[]= {0, 4, 4, 6, 8, 7, 9, 0};
	
	printf("Es %d", strlenC(arrayInt));
	
	return 0;
}

int strlenC(int arrayInt[]){
	int len = 0;
	
	printf("%d\n", sizeof(arrayInt) / sizeof(arrayInt[0]));
	
	len = sizeof(arrayInt) / sizeof(arrayInt[0]);
	
	return len;
}
