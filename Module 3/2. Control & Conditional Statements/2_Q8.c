#include<stdio.h>

int main()
{
	int h;
	
	printf("Enter your height in centimeter\n");
	scanf("%d",&h);
	
	if (h>=180){
		printf("Tall");
	}
	else if(h>138){
		printf("Medium");
	}
	else {
		printf("Short");
	}
	
	return 0;
}
