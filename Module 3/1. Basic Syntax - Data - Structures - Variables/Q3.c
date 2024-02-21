#include<stdio.h>

int main()
{
	float r,A,C;
	
	printf("Enter the radius\n");
	scanf("%f",&r);
	
    A=3.14*r*r;
	C=2*3.14*r;
	
	printf("Area of circle is %.2f\n",A);
	printf("Circumference of circle is %.2f",C);
		
	return 0;
}
