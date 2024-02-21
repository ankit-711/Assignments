#include<stdio.h>

int main()
{
	float h,b,A;
	
	printf("Enter height\n");
	scanf("%f",&h);
	printf("Enter base\n");
	scanf("%f",&b);
	
	A=0.5*h*b;
	
	printf("Area of triangle is %.2f",A);
	
	return 0;
}
