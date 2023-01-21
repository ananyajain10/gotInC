#include <stdio.h>

int main(){
	int a[10], b[10], c[10],i;
	
	printf("Enter 5 Elements for array 1:");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter 5 Elements for array 2:");
	for(i=0; i<5; i++){
		scanf("%d",&b[i]);
	}
	
	printf("sum of 1 and 2 Array Elements:");
	for(i=0; i<5; i++){
		c[i]= a[i]+ b[i];
		printf("%d ",c[i]);
	}
	
	return 0;
}
