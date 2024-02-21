#include<stdio.h>

int main()
{

	int i,j;
	
	for(i=1;i<=11;i++)
	  {
	  	for(j=1;j<=6;j++)
	  	{  
	  	  if (j==1 && i==1) {
			printf("*");
		  }
		  else if (j<=2 && i==2){
		   	printf("*");
		  }
		  else if (j<=3 && i==3){
		  	printf("*");
		  }
		  else if (j<=4 && i==4){
		  	printf("*");
		  }
		  else if (j<=5 && i==5){
		  	printf("*");
		  } 
		  else if (j<=6 && i==6){
		  	printf("*");
		  } 
		  else if (j<=5 && i==7){
		  	printf("*");
		  }
		  else if (j<=4 && i==8){
		  	printf("*");
		  }
		  else if (j<=3 && i==9){
		  	printf("*");
		  }
		  else if (j<=2 && i==10){
		  	printf("*");
		  }
		  else if (j<=1 && i==11){
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
