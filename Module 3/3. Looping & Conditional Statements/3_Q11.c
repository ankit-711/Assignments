#include<stdio.h>

int main()
{
	int i;
	char name[5][30];
	
	printf("Enter five names\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d.",i+1);
		scanf("%s",&name[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("Name %d : %s\n",i+1,name[i]);
	
	}
	
	
	return 0;
}
