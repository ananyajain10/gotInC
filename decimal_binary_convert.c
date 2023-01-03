#include <stdio.h>

int main(){
	int q,r=0,b=0,d,i=1;
	
	printf("ENTER DECIMAL NUMBER:");
	scanf("%d",&d);
	q=d;
	
	while(q>0){
		r=q%2;
		b=b+(r*i);
		q=q/2;
		i=i*10;
	}
	
	printf("%d",b);
	
	return 0;
}
