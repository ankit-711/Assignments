#include<stdio.h>

int main()
{
	int maths,chem,phy;
	printf("Enter marks of maths:");
	scanf("%d",&maths);
	printf("Enter marks of chemistry:");
	scanf("%d",&chem);
	printf("Enter marks of physics:");
	scanf("%d",&phy);
	
	int total = maths+chem+phy;
	int MP = maths+phy;

    if (maths>=65 && phy>=55 && chem>=50 && total>=190 && MP>=140){
    	
    	printf("You are eligible.");
	} 
	else {
		printf("You are not eligible.");
	}	
	return 0;
}
