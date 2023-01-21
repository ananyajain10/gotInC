#include <stdio.h>
int main(){
	int a[10],mArray[10] ,i,n, m=0, p;
	
	printf("Enter 5 Array Elements:");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter an element to know its position in the array:");
	scanf("%d",&n);
	
	for(i=0; i<5; i++){
		if(a[i]==n){
			mArray[m]=i+1;
			m=m+1;
		}
		
	}
	printf("Position of %d in given array is ",n);
	for(i=0; i<m; i++){
		printf("%d ",mArray[i]);
	}
	
  return 0;	
}
