#include <stdio.h>
#define TRUE 1

void main(){
	int i, temp;
	scanf("%d", &i);
	
	while(TRUE){
		temp = i % 10;
		i /= 10;
		printf("%d", temp);
		if(i == 0) break;
	}
	printf("\n");
}
