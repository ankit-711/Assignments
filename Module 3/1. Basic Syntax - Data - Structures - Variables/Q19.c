#include<stdio.h>
#include<math.h>

int main()
{
	double P,rate,time,n,CI,A;
	
	printf("Enter the principal amount\n");
	scanf("%lf",&P);
	
	printf("Enter the rate of interest\n");
	scanf("%lf",&rate);
	 rate= rate/100;
	
	printf("Enter the time in years\n");
	scanf("%lf",&time);
	
	printf("Enter the number of times interest compounded per year\n");
	scanf("%lf",&n);
	
	A = P * pow((1+rate/n),(n*time));
	
	printf("A is %lf\n", A);
	
	CI=A-P;
	
	printf("Compound Interest is %lf",CI);
	
	return 0;
}
