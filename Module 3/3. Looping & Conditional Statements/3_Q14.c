#include<stdio.h>

int fact(int num);

int main() {
    int num, i;
    int Fact;

    printf("Enter 5 numbers:\n");

    for (i = 1; i <= 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        Fact = fact(num);
        printf("Factorial of %d is %d\n", num, Fact);
    }

    return 0;
}

int fact(int num)
{
    if (num == 0){
        return 1;
    } 
	else {
        return num * fact(num - 1);
    }
}

