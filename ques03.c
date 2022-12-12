/* a. Write a program to check if a given number is
Armstrong number or not.

answer:   int main()
{
	int a, b,sum,k;
	sum=0;
	printf("ENTER A NUMBER: ");
	scanf("%d",&a);
	k=a;
	while (k>0)
	{
		b=k%10;
		sum = sum + (b*b*b);
	//	printf("b=%d\n",b);
		k=k/10;
	//	printf("k=%d\n",k);
	}
	if (a==sum)
	{
		printf("%d is Armstrong number ",a);
	}
	else
	{
		printf("%d is not Armstrong number ",a);
	}
	
	return 0;
	
}

b. Write a program to check if the given number is a
natural number.
(Natural numbers start from 1)
(Search what is Armstrong number) 
*/

#include <stdio.h>

int main()
{
	int q;
	printf("Enter a number:");
	scanf("%d",&q);
	if (q>0){
		printf("%d is a natural number",q);
	}
	else{
		printf("%d is not a natural number",q);
	}
	return 0;
	
}
