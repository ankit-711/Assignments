#include<stdio.h>

int main()
{
	int n[5],i;
	
	printf("Enter five numbers.\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
		
		if(n[i]%2==0){
			printf("Even\n",n[i]);
		}else{
			printf("Odd\n",n[i]);
		}
	}
	
	
	return 0;
}
