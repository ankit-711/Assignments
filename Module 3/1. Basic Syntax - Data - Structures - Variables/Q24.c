#include<stdio.h>

int main()
{
	char name[10][10][10][10][10];
	int salary[100],i,sum=0;
	float avg;
	for(i=0;i<5;i++)
	{
		printf("Emp. %d name: ",i+1);
		scanf("%s",&name[i]);
		printf("Emp. %d salary: ",i+1);
		scanf("%d",&salary[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%s\t",name[i]);
		printf("- %d\n",salary[i]);
	}
	for(i=0;i<5;i++){
		sum = sum + salary[i];
	}
	printf("Total salary is %d\n",sum);
	
	 avg = sum/5;
	 
	printf("Average of salary is %.2f",avg);
	
	return 0;
}
