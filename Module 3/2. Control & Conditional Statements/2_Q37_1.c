#include<stdio.h>

int main()
{
	int choice;
	
	printf("Enter 1 for Mon.\nEnter 2 for Tues.\nEnter 3 for Wed.\nEnter 4 for Thu.\nEnter 5 for Fri.\nEnter 6 for Sat.\nEnter 7 for Sun.\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("Monday");
		     break;
		case 2: printf("Tuesday");
		     break;
		case 3: printf("Wednesday");
		     break;
		case 4: printf("Thursday");
		     break;     
		case 5: printf("Friday");
		     break;     
		case 6: printf("Saturday");
		     break;     
		case 7: printf("Sunday");
		     break;
		default: printf("invalid Choice");	      
	}
	
	
	
	return 0;
}
