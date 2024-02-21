#include<stdio.h>

int main()
{
	float years;
	int days;
	
	printf("Enter number of years:");
	scanf("%f",&years);
	
	days = years*365;
	
	printf("Number of days are %d",days);
	
	

	return 0;
}
