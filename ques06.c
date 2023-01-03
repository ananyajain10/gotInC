/*
a. Write a program in C to find the maximum number
between two numbers using a pointer.
answer:

#include <stdio.h>
int main(){
	int a,b;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	int* ptra = &a;
	int* ptrb = &b;
	if (*ptra>*ptrb){
		printf("%d is maximum", *ptra);
	} 
	else{
		printf("%d is maximum", *ptrb);
	}
	
	return 0;
}

b. Write a program in C to print the elements of an
array in reverse order.
answer:
#include <stdio.h>
int main(){
	int i;
    int arr[]={1 ,2 ,3 ,4 ,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("original list \n ");
    for(i=0; i<length; i++){
    	printf("%lu ", arr[i]);
	}
    printf("\n reversed list \n ");
    for( i= length; i>=1; i-- ){
  	   printf("%lu ",arr[i]);
     }

	return 0;
}

