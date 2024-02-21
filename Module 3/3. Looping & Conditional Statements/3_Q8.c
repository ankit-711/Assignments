#include<stdio.h>

int main() {
    int num,rem,max;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int copy=num;
        max = 0;
    
    while(num > 0) {
        rem = num % 10;
        if(rem > max) {
            max = rem;
        }
        num = num/10;
    }
    
    
    printf("The max digit in the number %d is %d", copy,max);
    
    return 0;
}
