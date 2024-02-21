#include<stdio.h>
int main()
{
	int n1,n2,n3;

	printf("Enter first number:");
	scanf("%d",&n1);
	
	printf("\nEnter second number:");
	scanf("%d",&n2);
	
	printf("\nEnter third number:");
	scanf("%d",&n3);
	
if (n1>n2 && n1>n3)
{
	printf("%d is the Largest Number",n1);
}
else if (n2>n1 && n2>n3){
	printf("%d is the Largest Number",n2);
}	
else {
	printf("%d is the Largest Number",n3);
}	
	return 0;
}
