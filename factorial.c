#include <stdio.h>

int main(){
	int fact=1, n, i;
	
	printf("ENTER A NUMBER TO FIND FACTORIAL:");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++){
		fact= fact*i;
	}
	
	printf("FACTORIAL OF %d IS %d",n,fact);
}
