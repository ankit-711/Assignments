#include<stdio.h>

int main()
{
    int salary;
    float gross;
    
    printf("Enter your salary:");
    scanf("%d",&salary);
    
    if(salary<=10000){
    	gross = salary + (salary*0.2) + (salary*0.8);
    	printf("Your gross salary is %.2f",gross);
	}
	else if(salary<=20000){
	    gross = salary + (salary*0.25) + (salary*0.9);
    	printf("Your gross salary is %.2f",gross);
    }
    else {
    	gross = salary + (salary*0.3) + (salary*0.95);
    	printf("Your gross salary is %.2f",gross);
	}
	return 0;
}
