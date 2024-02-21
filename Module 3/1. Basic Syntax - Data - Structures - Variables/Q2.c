#include<stdio.h>

int main()
{
	int a,b;
	int ans;
	
	printf("Enter first value\n");
	scanf("%d",&a);
	printf("Enter second value\n");
	scanf("%d",&b);

    ans = a+b;
    printf("Addition of %d and %d is %d.\n",a,b,ans);
	
	ans = a-b;
	printf("Subtraction of %d and %d is %d.\n",a,b,ans);
	
	ans = a*b;
	printf("Multiplication of %d and %d is %d.\n",a,b,ans);
	
	ans = a/b;
	printf("Division of %d and %d is %d.\n",a,b,ans);
	
	ans = a%b;
	printf("Modulo of %d and %d is %d.\n",a,b,ans);
	
	
	return 0;
}
