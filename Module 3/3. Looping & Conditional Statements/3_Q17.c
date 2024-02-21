#include<stdio.h>

int main()
{
   int n,i,even=0,odd=0;
   i=1;
   printf("Enter 5 numbers.\n");
   
   while(i<=5){
   	 
   	printf("Enter %d. ",i);
   	scanf("%d",&n);
    if(n%2==0)
    {
    	even++;
	}
   	else{
   		odd++;
	   }
   	i++;
   }
    printf("Odd Numbers = %d\n",odd);
    printf("Even Numbers = %d",even);
  
   return 0;
}
