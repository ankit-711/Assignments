#include<stdio.h>

int main()
{
   int n,i,j,sum,s=0;
   
   printf("Enter number(1-n):\n");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
   	 sum=0;
   	 for(j=1;j<=i;j++)
   	  {
   	 	sum = sum + j;
	  } 
	  s = s + sum;
   }
   
   for(i=1;i<=n;i++)
   { 
      printf("(");
   	for(j=1;j<=i;j++)
   	{
   		
   	 if(j<n && j==1)
		{
		  printf("%d",j);
		}
	 else{
	 	 printf("+%d",j);
	    }
     }
      printf(")");
      if(i<n){
      	printf("+");
	  }
   }
   
   printf(" = %d",s);
   
  
   return 0;
}
