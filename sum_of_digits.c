#include <stdio.h>

int main(){
	int n,sum=0,r,q;
	
	printf("ENTER A  NUMBER:");
	scanf("%d",&n);
	q=n;
	
	while(q>0){
		r=q%10;
		sum=sum+r;
		q=q/10;
	}
	printf("SUM OF DIGITS OF %d IS %d",n,sum);
	
	return 0;
	
}
