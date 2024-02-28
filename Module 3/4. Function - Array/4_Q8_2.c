#include<stdio.h>

struct employee{
	
	int No;
	int age;
	char name[100];
	char add[100];
};

int main()
{
	int i;
	
	struct employee e[5];
	printf("Enter details of employees.\n");
	for(i=0;i<5;i++)
	{
		printf("Employee %d: \n",i+1);
		printf("Name   : "); scanf("%s",&e[i].name);
		printf("Emp No : "); scanf("%d",&e[i].No);
		printf("Age    : "); scanf("%d",&e[i].age);
		printf("Address: "); scanf("%s",&e[i].add);
		
		
	}
	for(i=0;i<5;i++)
	{
		printf("Employee %d \n",i+1);
		printf("Name : %s\tEmp.No. : %d\tAge : %d\tAddress : %s\n",e[i].name,e[i].No,e[i].age,e[i].add);
	}
	
	
	return 0;
}
