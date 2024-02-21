#include<stdio.h>

int main()
{
	float temp,C;
	
	printf("Enter temperature in fahrenheit: ");
	scanf("%f",&temp);
	
	C = (temp-32)*5/9;
	
	printf("Temperature in Celsius is: %f",C);
	
	
	return 0;
}
