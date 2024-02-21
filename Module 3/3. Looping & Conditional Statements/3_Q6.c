#include<stdio.h>

int main()

{
	int i,n,f1=0,f2=1,f3=f1+f2;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	printf("%d\t%d\t%d",f1,f2,f3);
	
	for(i=1;i<=n-3;i++){
		f1=f2;
		f2=f3;
		f3=f1+f2;
		printf("\t%d",f3);
	}
	
	
	
	return 0;
}
