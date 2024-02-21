#include<stdio.h>
int main()
{
	char ch;

	printf("Enter Character in lowercase");
	scanf("%c",&ch);
	
if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
{
	printf("The character is vowel");
}	
else {
	printf("The character is not vowel");
}	
	
	
	return 0;
}
