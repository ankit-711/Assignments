#include<stdio.h>
int main()
{
	int n;

	printf("Enter number");
	scanf("%d",&n);
	
	
if (n>0)
{
	printf("%d is Positive Number",n);
}
else if (n<0)
{
	printf("%d is Negative Number",n);
}	
else {
	printf("Your number is Zero");
}	
	return 0;
}
