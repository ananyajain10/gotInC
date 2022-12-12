/* a. Write a program to print the average of 3 numbers.
   b. Write a program to check if given character is digit or not.
   c. Write a program to print the smallest number of two. */
	
	
	
/* ANSWERS 
	a. Write a program to print the average of 3 numbers.
	int a,b,c;
	// r= (a+b+c)/3;
	printf("ENTER 3 NUMBERS\n");
	scanf("%d\n%d\n%d\n",&a,&b,&c);
	printf("Average of given numbers is: %d ", (a+b+c)/3);
	
	return 0; 
	
	b. Write a program to check if given character is digit or not.
	
	#include <stdio.h>

	int main()
	{
		char ch;
		printf("Enter a character: ");
		scanf("%c",&ch);
		if (ch >=0 && ch <= 9)
		{
			printf("%c is a digit.",ch);
		}
		else
		{
			printf("%c is not a digit.",ch);
		}
		
		return 0;
	}



	c. Write a program to print the smallest number of two.
		int main()
	{
	   int a,b;
	   printf("ENTER TWO NUMBERS:");
	   scanf("%d\n%d",&a,&b);
	   if (a>b)
	   {
	   	printf("%d is smallest",b);
	   }
	   else
	   {
	   	printf("%d is smallest",a);
	   }
	}

	
	*/


#include <stdio.h>

int main()
{
  int a;
  printf("enter here: ");
  scanf("%d",&a);
  printf("%d\n\n\n",a/10);
  printf("%d",a%10);
  
  return 0;
}
