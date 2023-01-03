#include <stdio.h>

int main(){
	int n, sum_odd=0, sum_even=0, i;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++){
		if (i%2==0){
			sum_even=sum_even+i;
		}
		else{
			sum_odd=sum_odd+i;
		}
	}
	printf("Sum of even numbers till %d is %d\n",n,sum_even);
	printf("Sum of odd numbers till %d is %d",n,sum_odd);
}
