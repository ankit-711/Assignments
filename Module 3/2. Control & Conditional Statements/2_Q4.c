#include<stdio.h>

int main()
{
	int n1,n2;
	char choice;
	
	printf("Enter '+' for Addition.\nEnter '-' for Subtraction.\nEnter '*' for Multiplication.\nEnter '/' for Division.\nEnter Symbol for Modulo\n");
	
	printf("Enter first number\n");
	scanf("%d",&n1);
	
	printf("Enter operator\n");
	scanf(" %c",&choice);
	
	printf("Enter second number\n");
	scanf("%d",&n2);
	
	
	switch(choice)
	{
		case '+': printf("Addition of %d and %d is %d",n1,n2,n1+n2);
		     break;
		case '-': printf("Subtraction of %d and %d is %d",n1,n2,n1-n2);
		     break;
		case '*': printf("Multiplication of %d and %d is %d",n1,n2,n1*n2);
		     break;
		case '/':
		     if(n2==0) 
			 { 
			   printf("Can't divide by zero");
			 }
			 else {
			 printf("Division of %d and %d is %d",n1,n2,n1/n2);
		     }
			 break;     
		case '%': printf("Modulo of %d and %d is %d",n1,n2,n1%n2);
		     break;     
		     
		default: printf("invalid Choice");	      
	}
	
	
	return 0;
}
