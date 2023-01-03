#include <stdio.h>

int main(){
	int n,i,f;
	
	printf("ENTER A NUMBER GREATER THAN 1:");
	scanf("%d",&n);
	
    if (n>2){
    	for (i=2; i<n/2 ; i++){
    		if (n%i==0){
    			//printf("%d is not prime",n);
    			f=1;
    			break;
			}
		else{
			f=0;
		}
		}
		
		if (f == 0){
		
             printf("%d is a prime number.", n);
     		}
    		else{
   				 printf("%d is not a prime number.", n);
   			}
	}
	else{
			printf("%d is prime",n);
	}
	
	return 0;
}
