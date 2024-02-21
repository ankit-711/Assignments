#include<stdio.h>

int main()
{
	float km;
	
	printf("Enter value in kilometers:");
	scanf("%f",&km);
	
	int m = km*1000;
	
	printf("Your answer is %d meters",m);
	
	return 0;
}
