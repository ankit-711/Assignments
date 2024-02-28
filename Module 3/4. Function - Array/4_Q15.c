#include<stdio.h>

int main()
{
	int n[5],i,j,temp;
	
	printf("Enter five numbers.\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]>n[j]){
			temp=n[i];
			n[i]=n[j];
			n[j]=temp;
		}
		 } 
	}
	printf("After Ascending:- ");
	for(i=0;i<5;i++)
	{
		printf("%d ",n[i]);
	}
	
	return 0;
}
