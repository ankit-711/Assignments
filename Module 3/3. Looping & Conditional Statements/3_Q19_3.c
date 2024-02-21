#include<stdio.h>

int main()
{

	int i,j;
	
	for(i=1;i<=5;i++)
	  {
	  	for(j=1;j<=9;j++)
	  	{  
	  	  if (j==5 && i==1) {
			printf("*");
		  }
		  else if (j>=4 && j<=6 && i==2){
		   	printf("*");
		  }
		  else if (j>=3 && j<=7 && i==3){
		  	printf("*");
		  }
		  else if (j>=2 && j<=8 && i==4){
		  	printf("*");
		  }
		  else if (j>=1 && j<=9 && i==5){
		  	printf("*");
		  }  
		  else {
		  	printf(" ");
		  }
		  	  
	    }
		printf("\n");
	  }
	
		
	return 0;
}
