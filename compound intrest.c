#include<stdio.h>
#include<math.h>
int main()
{
        double p,r,t,amount,compound_intrest;
		
		printf("enter values of principle,rate and time: ");
		scanf("%lf,%lf,\n%lf",&p,&r,&t);	
	
	amount=p*pow((1+r/100),t);
	
	compound_intrest=amount-p;
	
        printf("the compount intrest is %.2lf",compound_intrest);
        printf("the total amount after %.2lf years is: %.2lf",t,amount);
	
	
	
	
	
	return 0;
}