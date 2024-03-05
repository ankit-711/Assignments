#include<stdio.h>

int main()
{
	char arr1[100],arr2[100];
	
	printf("Enter first word of your school name : ");
	scanf("%s",arr1);
	printf("Enter second word of your school name : ");
	scanf("%s",arr2);
	
	printf("Abbreviated form of your school name is ");
	printf("%c. ",arr1[0]);
	printf("%c. school",arr2[0]);
	
	
	return 0;
}
