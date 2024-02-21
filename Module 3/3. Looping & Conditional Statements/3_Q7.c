#include<stdio.h>

int main()
{
	int num,rem,rev=0,copy;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	copy=num;
	while(num!=0)
	{
		rem = num%10;
		rev = rem + rev*10;
		num = num/10;
		
	}
	 printf("Original number is %d and reverse is %d",copy,rev);
	
	
	return 0;
}
