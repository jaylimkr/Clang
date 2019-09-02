#include <stdio.h>
#define TRUE 1
void main(){
	
	int i;
	int n;
	int sum;
	
	while(TRUE){
		scanf("%d", &n);
		if(n >= 1 && n <=10)
			for(i = 1; i <= n; i++){
				sum += i;
				
			}
			
			else break;
	}
	printf("%d\n", sum);
}
