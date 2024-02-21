#include<stdio.h>

int main()
{
    int n, sum=0, fd, ld;
    
    printf("Enter number : ");
    scanf("%d", &n);

    ld = n % 10;
 
     while(n>9)
      {
        n = n/10;
      }
    fd = n;
    
    sum = fd + ld;
    
    printf("Sum of first and last digit is %d", sum);
    
    return 0;
}
