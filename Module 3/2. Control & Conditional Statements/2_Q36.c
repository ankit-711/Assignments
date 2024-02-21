#include<stdio.h>

int main()
{
  int unit;
  float bill,c;

     printf("Enter electricity unit: ");
     scanf("%d",&unit);
     
     if(unit<=50){
     	c = unit*0.5;
	 }
     else if(unit<=150){
     	c = 25 + (unit-50)*0.75;
     	
	 }
     else if(unit<=250){
     	c = 100 + (unit-150)*1.2; 
     	
	 }
     else {
     	c = 220 + (unit-250)*1.5; 
     	
	 }
	 bill = c + c*0.2;
	 printf("Electricity bill of yours is Rs. %.2f",bill);

	return 0;
}
