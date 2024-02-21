#include<stdio.h>

int main()
{
   int n,i,sum=0;
   i=1;
   printf("Enter number(1-n) for addition.\n");
   scanf("%d",&n);
   while(i<=n){
   	 
    sum = sum + i;
   	
   	i++;
   }
  printf("Sum of first %d numbers is %d.",n,sum);
  
   return 0;
}
