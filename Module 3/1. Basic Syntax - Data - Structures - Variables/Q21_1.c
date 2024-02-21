#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter value of a:\n");
	scanf("%d",&a);
	
	printf("Enter value of b:\n");
	scanf("%d",&b);
	
	int c=a;
	a=b;
	b=c;
	
	printf("After Swap a is %d and b is %d",a,b);
	
	
	return 0;
}
