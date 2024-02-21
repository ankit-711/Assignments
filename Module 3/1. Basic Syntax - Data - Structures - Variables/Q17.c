#include<stdio.h> 

int main()
{
	int salary;
	float lic;
	
	printf("Enter your salary: ");
	scanf("%d",&salary);
	
	if(salary<=10000){
		lic = salary*0.05;
		printf("Your insurance  premium is %.2f",lic);
	}
	else if(salary<=20000){
		lic = salary*0.075;
		printf("Your insurance  premium is %.2f",lic);
	}
	else {
		lic = salary*0.1;
		printf("Your insurance  premium is %.2f",lic);
	}
	
	
	
	return 0;
}
