#include<stdio.h>

int main()
{
   int i,n,rev,rem,p;
   
   i=0;
    
   while(i<3){
   	
   	printf("Enter number %d. ",i+1);
    scanf("%d",&n);
    
    p=n;rev=0;
   while(n!=0){
   	
   	  rem = n % 10;
   	  rev = rev * 10 + rem;
   	  n = n/10;
   }
    
    if(p==rev){
    	printf("%d is palindrome number.\n",p);
	}
	else{
		printf("%d is not palindrome number.\n",p);
	}i++;
   }
    
   return 0;
}
