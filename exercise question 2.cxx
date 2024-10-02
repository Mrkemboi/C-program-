#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineAmount;
    float fineRate;

    // User input for book ID, due date, and return date
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20.0;
    } else if (daysOverdue <= 14) {
        fineRate = 50.0;
    } else  {
        fineRate = 100.0;
    }
        fineAmount = daysOverdue * fineRate;
     
         printf("\nBook ID :%d",bookID);
    
         printf(" \nDue Date :%d ",dueDate);
        
         printf("\ndays overdue %d: ",daysOverdue);
         printf("\nreturn date %d:",returnDate);
         printf("\nfine amount %f:",fineAmount);
         printf("\nfinerate:%f",fineRate);
         
        
        return 0;
    }