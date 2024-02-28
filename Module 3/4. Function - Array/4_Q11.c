#include<stdio.h>

int main()
{
	int arr[100],i;
	
	for(i=0;i<5;i++){
		printf("Enter number %d. ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("arr[5] = {");
	for(i=0;i<5;i++){
		if(i<4)
		{
		  printf("%d, ",arr[i]);
	    }else {
	      printf("%d}\n",arr[i]);
		}
	}
    printf("After reverse: \narr[5] = {");
		
	for(i=4;i>=0;i--){
		if(i>0)
		{
		  printf("%d, ",arr[i]);
	    }else {
	      printf("%d}\n",arr[i]);
		}
	}
	
	
	
	return 0;
}
