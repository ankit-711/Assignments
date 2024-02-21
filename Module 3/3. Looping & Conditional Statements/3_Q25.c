#include<stdio.h>

int main()
{
   int n,i,sum=0;
   i=1;
   printf("Enter number(1-n) for addition.\n");
   scanf("%d",&n);
   
   while(i<=n){
   	 
    sum = sum + i*i;
   	
   	i++;
   }
   i=1;
   while(i<=n)
   {
   	 if(i<n)
		{
		  printf("(%d*%d) + ",i,i);
		}
	 else{
	 	 printf("(%d*%d) ",i,i);
	 }i++;
   }
   
   printf("= %d",sum);
   
  
   return 0;
}
