#include <stdio.h>
int main(){
	int a,b,c,n;
	printf("Enter a number:");
	scanf("%d",&a);
	n=0;
	c=a;
    while (c>0){
    	b=c%10;
    	n=(n*10)+b;
    	c=c/10;
	}
	if (n==a){
		printf("palindrome");
	}
	else{
			printf("not palindrome");
	}
	return 0;
}
