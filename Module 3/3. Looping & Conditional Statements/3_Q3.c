#include<stdio.h>

int main()
{
	int i,n,even=0,odd=0,sum1=0,sum2=0;
	
    for(i=1;i<=10;i++)
	{
      printf("Enter Number %d. ",i);
      scanf("%d",&n);
      
      if (n%2==0){
      	 even++; sum1 = sum1 + n; 
	  }
	  
	  else {
	  	odd++; sum2 = sum2 + n; 
	  }
	 
    }
	printf("There are %d even numbers\n",even);
	printf("There are %d odd numbers\n",odd);
	
	printf("Sum of even numbers are %d\n",sum1);
	printf("Sum of odd numbers are %d\n",sum2);
	
	
	return 0;
}
