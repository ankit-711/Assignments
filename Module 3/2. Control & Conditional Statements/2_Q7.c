#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter your marks\n");
	scanf("%d",&marks);
	
	if (marks>=35){
		printf("PASS");
	}
	else {
		printf("FAIL");
	}
	
	
	return 0;
}
