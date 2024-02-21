#include<stdio.h>

int main()
{
	float years;
	int days,months;
	
	printf("Enter number of years:");
	scanf("%f",&years);
	
	days = years*365;
	months = years*12;
	
	printf("Number of days are %d & months are %d",days,months);
	
	
	return 0;
}
