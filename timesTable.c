#include <stdio.h>

void main(){
	int n;
	int j;
	
	scanf("%d", &n);
	
	if(n >= 1 && n <= 9)
		for(j = 1; j < 10;j++){
			printf("%d * %d = %d\n", n, j, (n*j));
			}
		
		
}
	

