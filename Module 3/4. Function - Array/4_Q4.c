#include<stdio.h>

int fact(int n);

int main()
{
	int n1;
	
	printf("Enter number(1-n): \n");
    scanf("%d",&n1);
	printf("Factorial of %d is %d.",n1,fact(n1));
	
	return 0;
}

int fact(int n){
	
    if (n>1){
    	
    	return n*fact(n-1);
	}
	 else {
		return 1;
	}
}
