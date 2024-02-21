#include<stdio.h>

int main()
{
	float days;
	
	printf("Enter number of days:");
	scanf("%f",&days);
	
	float years = days/365;
	
	printf("Number of years are %.2f",years);
	
	
	return 0;
}
