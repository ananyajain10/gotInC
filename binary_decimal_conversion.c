#include <stdio.h>
#include <math.h>
int main(){
	int r,q,d=0,b,i=0;
	
	printf("ENTER BINARY NUMBER:");
	scanf("%d",&b);
	q=b;
	
	while(q>0){
		r=q%10;
		d=d+(r* (pow(2,i)));
		q=q/10;
		i=i+1;
	}
	printf("%d",d);
	return 0;
}
