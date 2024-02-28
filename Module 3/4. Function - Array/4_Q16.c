#include<stdio.h>

int main()
{
	int n[5],i,sum=0;
	
	printf("Enter five numbers.\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum = sum + n[i];
	}
    printf("Sum = %d",sum);
	
	return 0;
}
