#include<stdio.h>

int main()
{
	float a,b,c,C;
	
	printf("Enter value of side a\n");
	scanf("%f",&a);
	printf("Enter value of side b\n");
	scanf("%f",&b);
	printf("Enter value of side c\n");
	scanf("%f",&c);
	
	C=a+b+c;
	
	printf("Circumference of triangle is %.2f",C);
	
	return 0;
}
