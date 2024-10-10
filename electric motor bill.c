#include <stdio.h>

int main() {
    int customerid, unitconsumed;
    char customername[25];
    float totalcharges, totalbill,surchargedamount,total_amount_to_payed;

    printf("Enter customer id = ");
    scanf("%d", &customerid);
    printf("Enter customer name = ");
    scanf("%s", customername); 
    printf("Enter unit consumed = ");
    scanf("%d", &unitconsumed);

    if (unitconsumed < 200) {
        totalcharges = 1.2;
    } else if (unitconsumed >= 200 && unitconsumed < 400) {
        totalcharges = 1.5;
    } else if (unitconsumed >= 400 && unitconsumed < 600) {
        totalcharges = 1.80;
    } else {
        totalcharges = 1.80; 
    }
  
    totalbill = totalcharges * unitconsumed;
    
if ( totalbill>400)
{
surchargedamount = 0.15*totalbill;
}
	else 
	{
	surchargedamount=0;
    }
	  total_amount_to_payed=totalbill+surchargedamount;
       
        
printf("\ncustomer name is: %s",customername);
printf("\ncustomer id is: %d",customerid);
printf("\nCHARGE PER UNIT is: %.2f",totalcharges);
printf("\nUNIT CONSUMED is: %d",unitconsumed);
 printf("\nthe total amount to be payed is: %.2f",total_amount_to_payed); 

    return 0;
}
