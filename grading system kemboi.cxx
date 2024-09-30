
#include <stdio.h>

int main() 
{
    int score;
    char grade;

  
    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    
    if (score >= 70 && score <= 100) {
        grade = 'A';
    } else if (score >= 60 && score <= 69) {
        grade = 'B';
    } else if (score >= 50 && score <= 59) {
        grade = 'C';
    } else if (score >= 40 && score <= 49) {
        grade = 'D';
    } else if (score < 40) {
        grade = 'E'; 
    } else {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        
    }

   
    printf("The grade is: %c\n", grade);
    
    return 0;
}