#include<stdio.h>

int main()
{
  int n,p1,p2,p3;
  
  printf("Enter number: ");
  scanf("%d",&n);

  p1 = n;
  p2 = n*n;
  p3 = n*n*n;

  printf("First three powers of %d :- %d, %d, & %d.",n,p1,p2,p3);

	return 0;
}
