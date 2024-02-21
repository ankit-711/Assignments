#include<stdio.h>


int main()
{
    int id, unit;
    float charge, sc = 0, bill, Fbill; 
    char name[50];

    printf("Enter Customer ID: "); 
    scanf("%d", &id); 
    printf("Enter Name: ");
    scanf("%s",&name); 
    printf("Enter the unit consumed by the user: ");
    scanf("%d", &unit); 

    if (unit < 350)
        charge = 1.20; 
    else if (unit >= 350 && unit < 600)
        charge = 1.50; 
    else if (unit >= 600 && unit < 800)
        charge = 1.80; 
    else
        charge = 2.00; 

    bill = unit * charge; 

    if (bill > 800)
        sc = bill * 0.18; 

    Fbill = bill + sc; 

    if (Fbill < 256)
        Fbill = 256; 

    printf("\nElectricity Bill\n\n");
    
    printf("Customer ID Number                  : %d\n", id);
    printf("Customer Name                       : %s\n", name);
    printf("Unit Consumed                       : %d\n", unit);
    printf("Amount Charges @ Rs. %.2f per unit  : %.2f\n", charge, bill);
    printf("Surcharge Amount                    : %.2f\n", sc);
    printf("Total Amount to be Paid             : %.2f\n", Fbill);
    
    return 0;
}  
