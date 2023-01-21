#include <stdio.h>

int main(){
	int n,rev=0,r,q;
	
	printf("ENTER A  NUMBER:");
	scanf("%d",&n);
	q=n;
	
	while(q>0){
		r=q%10;
		rev=rev*10+r;
		q=q/10;
		
		
	}
	
	printf("REVERSE OF %d is %d",n,rev);
}
