#include<stdio.h>

int main()
{
	float w,l,A;
	
	printf("Enter width\n");
	scanf("%f",&w);
	printf("Enter length\n");
	scanf("%f",&l);
	
	A=w*l;
	
	printf("Area of rectangle is %.2f",A);
	

	return 0;
}
