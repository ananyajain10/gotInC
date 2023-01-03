#include <stdio.h>

int main(){
	int n,sum=0,r,q,i;
	
	printf("Armstrong number from 1 to 100: ");
	for(i=1; i<=100; i++){
		q=i;
		if (i<=9){
		  while(q>0){
			r=q%10;
			sum=sum+r;
			q=q/10;
		}
		
			if (i==sum){
			printf("%d ",i);
		}
		
		}
		
		if (i<=99 && i>9){
			while(q>0){
			r=q%10;
			sum=sum+r*r;
			q=q/10;
		}
		
			if (i==sum){
			printf("%d ",i);
		}
		
		}
		
		if (i=100){
			while(q>0){
			r=q%10;
			sum=sum+r*r*r;
			q=q/10;
		}
		
			if (i==sum){
			printf("%d ",i);
		}
		
	}
		
	
		
	}
		return 0;
	}
	
	
	
