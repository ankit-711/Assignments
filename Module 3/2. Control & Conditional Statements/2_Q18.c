#include<stdio.h>

int main()
{
 float buy,sell,diff;
 
   printf("Enter buy value: ");
   scanf("%f",&buy);
   
   printf("Enter sell value: ");
   scanf("%f",&sell);

   diff = buy - sell;
   
   if (diff<0){
   	  printf("You have profit of %.2f in your transaction",diff);
   }
   else if(diff>0){
   	  printf("You have loss of %.2f in your transaction",diff);
   }
   else {
   	  printf("You don't have any profit or loss in your transaction");
   }

	return 0;
}
