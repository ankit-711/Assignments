#include<stdio.h>

int main()
{
	char country[100];
	int i;
	
	printf("Enter country name: ");
	fgets(country, sizeof country,stdin);
	
	printf("Abbreviated form of %s is ",country);
	
    for(i=0;i<3;i++)
	{
		printf("%c",country[i]);
	}	
	return 0;
}
