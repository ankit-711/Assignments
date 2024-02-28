#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i;
	
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);
	
	i = strlen(str);

	printf("In reverse: ");
	for(str[i]='\0';i>=0;i--)
	{
		printf("%c ",str[i]);
	}
	
	return 0;
}
