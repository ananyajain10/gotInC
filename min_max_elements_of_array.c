#include <stdio.h>

int main(){
	int a[10],i;
	
	printf("Enter 5 Array Elements:");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	int max=a[0], min=a[0];
	
	for(i=0; i<5; i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	
	printf("%d is maximum element\n",max);
	printf("%d is minimum element",min);
	
	return 0;
}
