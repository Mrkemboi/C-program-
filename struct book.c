#include<stdio.h>
#include<string.h>
 struct book{
    char title[30];
    char authername[30];
    int publicationyear;
    char isbn[13];
    float price;
 };
 
 int main()
 {
    struct book book;
     
     strcpy( book.title, "introduction to c programing");
     strcpy( book.authername, "john smith");
     strcpy( book.isbn, "678433444477");
     book.publicationyear=2022;
     book.price=49.5;
     
     
     printf("\ntitle:%s\nauthor:%s\nisbn:%s\nyear:%d\nprice:%.2f",book.title,book.authername,book.isbn,book.publicationyear,book.price);
     
     
     
     
     return 0;
 }