/*
a. Search on what a "nested loop" is & print this
pattern using it.
*****
*****
*****
*****
answer:  

#include <stdio.h>
int main(){
	int i,j;
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}


b. Write a program to check if a number is prime or not.

answer: 

#include <stdio.h>
int main(){
        int i,j;
        printf("Enter a number: ");
        scanf("%d",&i);
        if (i>2){
        	for(j=2; j<i; j++){
        		if (i%j==0){
        		
        			printf("%d is not a prime number",i);
        			break;
				}
				else{
			    	printf("%d is a prime number",i);
				    break;
				}
				
			}
			
			
		}
		else{
				printf("%d is a prime number",i);
				
				}
          
 return 0;	
}

c. Write a program to print prime numbers in a range

answer: 
#include <stdio.h>
int main(){
        int i,j ,k;
        k=2;
        printf("Enter a number:");
        scanf("%d",&i);
        j=1;
        while (j<=i){
        	
		  if (j>2){
		  	
		  	for (k=2; k<j; k++){
		  		
		  		if (j%k==0){
		  			break;
		  			
		  			
				  }
				 else{
				 	printf("%d\n",j);
				 	break;
				 		 } 
				 
				
			  }
			  j++;
		
			 
		  }
		  	
		  	 else{
				printf("%d\n",j);
				j++;
				
			} 
		  
		  
          
	}
          
 return 0;	
}
*/

#include <stdio.h>
int main(){
        int i,j ,k;
        k=2;
        printf("Enter a number:");
        scanf("%d",&i);
        j=1;
        while (j<=i){
        	
		  if (j>2){
		  	
		  	for (k=2; k<j; k++){
		  		
		  		if (j%k==0){
		  			break;
		  			
		  			
				  }
				 else{
				 	printf("%d\n",j);
				 	break;
				 		 } 
				 
				
			  }
			  j++;
		
			 
		  }
		  	
		  	 else{
				printf("%d\n",j);
				j++;
				
			} 
		  
		  
          
	}
          
 return 0;	
}
