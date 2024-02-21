#include<stdio.h>

int main()
{
   int n,i,sum=0;
   i=1;
   printf("Enter 10 numbers for addition.\n");
   
   while(i<=10){
   	 
   	printf("Enter %d. ",i);
   	scanf("%d",&n);
    sum = sum + n;
   	
   	i++;
   }
  printf("Sum = %d",sum);
  
   return 0;
}
