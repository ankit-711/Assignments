#include<stdio.h>

void palindrome();

int main()
{

    palindrome();
	
  return 0;
}

void palindrome(){
	
     int num,rem,rev=0,copy;
     
     printf("Enter Number: ");
	 scanf("%d",&num);
	
	for(copy=num;num!=0;num=num/10){
		
		rem = num % 10;
		rev = rem + rev*10;
	}
	if (rev==copy) 
	{
	    printf("It is palindrome number");
    }
	else {
		
		printf("It is not palindrome number");
	}
}
