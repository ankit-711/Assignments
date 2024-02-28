#include<stdio.h>

int max(int a[100], int n);

int main()
{
    int a[100];
    int i, n;
 
      printf("Enter number for size of array: ");
      scanf("%d", &n);

    for(i=0;i< n;i++)
    {
      printf("a[%d]=",i);
      scanf("%d", &a[i]);
    }
 
      printf("Max number is %d", max(a,n));
 
    return 0;
}

int max(int a[10], int n)
{
    int max = a[0];
    int i;
    for(i=0;i< n;i++)
    {
       if(a[i]>max)
       {
         max = a[i];
       }
    }
    return max;
}
