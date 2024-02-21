#include<stdio.h>

int main()
{
	int n1,n2;
	
	printf("Enter first number\n");
	scanf("%d",&n1);
	
	printf("Enter second number\n");
	scanf("%d",&n2);
	
	if (n1==n2){
		printf("Equal\n");
	}
	else {
		printf("Not Equal\n");
	}
	
	return 0;
}
