#include<stdio.h>

int main()
{
	float days,months;
	
	printf("Enter number of days:");
	scanf("%f",&days);
	
	months = days/30.416;
	
	printf("%.2f Months is the answer.",months);
	
	
	
	return 0;
}
