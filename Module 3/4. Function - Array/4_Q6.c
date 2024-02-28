#include<stdio.h>

int main()
{
	int a[2][2],b[2][2],mul[2][2],add[2][2],sub[2][2];
	int i,j,k,x;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter values for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter values for b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		} 
	}
	// Addition :-
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add[i][j] = a[i][j] + b[i][j];
		} 
	}
	// Subtraction :-
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		} 
	}
	// Multiplication :-
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{   
		    x=0;
			for(k=0;k<2;k++)
			{
				x = x + a[i][k]*b[k][j];
			}
			mul[i][j] = x;
		}
	}
	printf("Addition of matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",add[i][j]);
			
		} printf("\n");
	}
	printf("Subtraction of matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",sub[i][j]);
			
		} printf("\n");
	}
	printf("Multiplication of matrix : \n");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",mul[i][j]);
			
		} printf("\n");
	}
	return 0;
}
