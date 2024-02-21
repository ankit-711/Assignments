#include<stdio.h>

int main()
{
	int a,b; //a=10,b=20
	
	printf("Enter value of a:\n");
	scanf("%d",&a);
	
	printf("Enter value of b:\n");
	scanf("%d",&b);
	
	a=a+b; //a=10+20, a=30
	b=a-b; //b=30-20, b=10
	a=a-b; //a=30-10, a=20
	
	printf("After Swap a is %d and b is %d",a,b);
	
	
	return 0;
}
