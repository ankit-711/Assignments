#include<stdio.h>

int main()
{
    int minutes,seconds,hours;
	
	printf("Enter minutes:");
	scanf("%d",&minutes);
	
	seconds = 60*minutes;
	hours = minutes/60;
	
	printf("Number of seconds are %d & hours are %d",seconds,hours);
	
	

	return 0;
}
