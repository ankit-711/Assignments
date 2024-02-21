#include<stdio.h>

int main()
{
	int exp[5],i,sum=0;
	float avg;
	
	for(i=0;i<5;i++)
	{
	   printf("Expense %d = ",i+1);
	   scanf("%d",&exp[i]);
	}
	for(i=0;i<5;i++)
	{
		sum = sum + exp[i];
	}
	avg = sum/5 ;
	
	printf("Average of your expense is %.2f",avg);
	
	return 0;
}
