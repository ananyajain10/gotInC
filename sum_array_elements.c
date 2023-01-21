#include <stdio.h>
int main(){
	int a[10];
	int i,sum=0;
	
	printf("enter 5 array elements:");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	printf("%d",sum);
	return 0;
}
