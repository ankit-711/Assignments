#include<stdio.h>

int main()
{
	int i,j,n,array[100],temp;
	char ch;
	  printf("Enter 'A' for Ascending Or 'D' for Descending : ");
	  scanf("%c",&ch);
	  printf("Enter size of array :\n");
	  scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Array :\t");
	 
	 for(i=0;i<n;i++)
	  {
	  	printf("%d\t",array[i]);
	  }
	  
	  
	switch(ch)
	{
		case 'A': for(i=0;i<n;i++)
	               {
	  	             for(j=i+1;j<n;j++)
	  	              {
	  	              	if(array[i]>array[j])
	  	                  { 
	  	 	                temp=array[i];
	  	 	                array[i]=array[j];
	  	 	                array[j]=temp;
			              }
		              }
	               }
	              printf("\nAfter Ascending:\n");
	  
	             for(i=0;i<n;i++)
	              {
	    	        printf("%d\t",array[i]);
		          }
		       break;   
		case 'D': for(i=0;i<n;i++)
	               {
	  	             for(j=i+1;j<n;j++)
	  	              {
	  	              	if(array[i]<array[j])
	  	                  { 
	  	 	                temp=array[i];
	  	 	                array[i]=array[j];
	  	 	                array[j]=temp;
			              }
		              }
	               }
	              printf("\nAfter Descending:\n");
	  
	             for(i=0;i<n;i++)
	              {
	    	        printf("%d\t",array[i]);
		          }
		       break;
		 default : printf("Invalid Choice");     
		
	}  
	
	return 0;
}
