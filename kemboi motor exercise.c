#include <stdio.h>

int main() 
{
    int t;
    float m;
    
   
    printf("enter time (minutes)\n: ");
    scanf("%d", &t);
    
    m=(0.02*1000*t);
    
    printf("the distance coverd in %d is : %.1f mitres\n",t,m);
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}