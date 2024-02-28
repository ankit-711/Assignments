#include<stdio.h>

int main()
{
	char str[100],sstr[100];
	int a,l,c=0;
	
	printf("Enter the string.\n");
	fgets(str, sizeof str, stdin);
	
	printf("Enter the starting position of extraction.\n");
	scanf("%d",&a);
	
	printf("Enter the length of substring.\n");
	scanf("%d",&l);
	
	while(c<l){
		sstr[c] = str[a + c -1];
		c++;
	}
	sstr[c] = '\0' ;
	
	printf("substring is %s", sstr);
	
	return 0;
}
