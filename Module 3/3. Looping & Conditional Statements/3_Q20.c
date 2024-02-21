#include<stdio.h>

int main()
{

	int i,j,temp=1;
	
	for(i=1;i<=5;i++)
	  {
	  	for(j=1;j<=10;j++)
	  	{  
	  	  if(temp<10){
			 printf("0%d ",temp);temp++;
		     }
		  else {
		  	 printf("%d ",temp);temp++;
		  }
	    }
		printf("\n"); 
	  }
	
		
	return 0;
}
