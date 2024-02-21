#include<stdio.h>

int main()
{
	int n,rem,rev=0,copy;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	copy=n;
	
	for(n;n>0;n=n/10)
	{
		rem = n % 10;
		rev = rem + rev*10;
		
	}
	 printf("Reverse of %d is %d",copy,rev);
	
	
	return 0;
}
