#include<stdio.h>

int main(){
	
	float a,b,c;
	
    printf("Enter Angles For Triangle :\n1. ");
    scanf("%f",&a);
    printf("2. ");
    scanf("%f",&b);
	printf("3. ");
    scanf("%f",&c);
	
	if (a+b+c==180){
		printf("Triangle can be formed with your given angles.");
	}
	else {
		printf("Triangle can't be formed.");
	}
		
	return 0;
}


