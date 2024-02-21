#include<stdio.h>

int main()
{
	float h,l,w,A;
	
	printf("Enter height\n");
	scanf("%f",&h);
	printf("Enter length\n");
	scanf("%f",&l);
	printf("Enter width\n");
	scanf("%f",&w);
	
	A = 2*((w*l)+(l*h)+(w*h));
	
	printf("Area of rectangular prism is %.2f",A);
	
	return 0;
}
