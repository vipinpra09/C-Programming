#include<stdio.h>

int main()
{
    printf("\"This Is A Leap Year Checker Program\" ");
    int year;
    printf("\nEnter Year:"); 
    scanf("%d", &year);
    if((year%400 == 0)||((year%100 != 0) && (year%4 == 0)) )
    {
    printf("Year is a Leap Year");
    }
    else{
    printf("Year is not a \"Leap Year\".");
    }
    printf(" \nThank You. ");
    return 0;
}