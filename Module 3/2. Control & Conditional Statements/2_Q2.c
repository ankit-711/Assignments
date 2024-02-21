#include<stdio.h>

int main()
{
	int m,n;
	
	printf("Enter value of m\n");
	scanf("%d",&m);
	
	if (m>0){
		printf("Value of n is 1");
	}
	else if (m<0){
		printf("Value of n is -1");
	}
	else {
		printf("Value of n is 0");
	}
	
	
	return 0;
}
