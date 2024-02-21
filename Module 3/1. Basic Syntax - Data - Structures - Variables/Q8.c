#include<stdio.h>

int main()
{
	float w,l,C;
	
	printf("Enter width\n");
	scanf("%f",&w);
	printf("Enter length\n");
	scanf("%f",&l);
	
	C = 2*(w+l);
	
	printf("Circumference of rectangle is %.2f",C);
	
	
	return 0;
}
