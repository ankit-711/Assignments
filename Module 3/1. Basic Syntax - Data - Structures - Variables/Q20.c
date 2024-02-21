#include<stdio.h>

int main()
{
	int salary;
	
	printf("Enter your Salary\n");
	scanf("%d",&salary);
	
	int final = salary - (0.2*salary);
	
	printf("Your salary after deduction is %d",final);
	
	
	return 0;
}
