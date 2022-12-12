/* a. Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.

b. Take a number(n) from user & output its cube(n*n*n).

c. Write comments for programs a & b. */

/*	

in this program we have to calculate perimeter of the rectangle with user entered length and breadth. a.b.c are our variables 
with the help of them we store the values.


	int a,b,c;
	c = 2*(a+b);
	printf("ENTER LENGTH : ");
	scanf("%d",&a);
	printf("ENTER BREADTH  : ");
	scanf("%d",&b);
	printf("Area of rectangle : %d", c);
	
	return 0;
	
	
in this program we will find the cube of user entered value.....	
	
	int n, c ;
	c = n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Cube of given number : %d", c);
	printf("%d",c); */
	
	
#include <stdio.h>
int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Cube of given number : %d", n*n*n);
	
	return 0;
}


