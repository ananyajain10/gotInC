/*
a. Write a function to find sum of digits of a number.
answer: 
#include <stdio.h>
int sum(int a);
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	sum(x);
}

int sum(int a){
	int b=0, c;
	while (a>0){
		c=a%10;
		b=b+c;
		a=a/10;
	}
    printf("%d",b);
	return("%d",b);
	
}

b. Write a function to find square root of a number.
answer:
 #include <math.h>
#include <stdio.h>

int main(){
	double x,y;
	printf("Enter a number to find square root: ");
	scanf("%lf",&x);
	y= pow(x,0.5);
	printf("Square root of %lf",y);
}


c. Write a function to print "Hot" or "Cold" depending
on the temperature user enters.


answer:
#include <math.h>
#include <stdio.h>

int main(){
	double x;
	printf("Enter temperature in degree celcius: ");
	scanf("%lf",&x);
	if (x>30){
		printf("UUUUUhh!!! it's hot");
	}
	else if (x<13){
		printf("UUUUUhh!!! it's cold");
	
	}
	else{
		printf("its normal temperature!!!!!!!");
	}
	
	return 0;
}
d. Make your own pow function

answer:
#include <math.h>
#include <stdio.h>

int main(){
	float x,y,res;
	printf("ENTER A NUMBER:");
	scanf("%f",&x);
	printf("ENTER RAISING POWER:");
	scanf("%f",&y);
	res= exp(y*(log(x)));
	printf("%f to the power %f is %f",x,y,res);
	

	return 0;
}


*/
#include <math.h>
#include <stdio.h>

int main(){
	float x,y,res;
	printf("ENTER A NUMBER:");
	scanf("%f",&x);
	printf("ENTER RAISING POWER:");
	scanf("%f",&y);
	res= exp(y*(log(x)));
	printf("%f to the power %f is %f",x,y,res);
	

	return 0;
}


