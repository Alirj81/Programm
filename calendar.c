/*
Learning outcomes:

Breaking down complex tasks into smaller, reusable functions
Knowledge of looping statements in C (for loop)
Use of arrays to store data
Work with conditional statements in C (if statements)
*/

#include <stdio.h>
#include <stdbool.h>

int main (void){
    int year, month, days, theday;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("the day: ");
    scanf("%d", &theday);
    char* months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    bool leapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); //leap year check 
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        days = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        days = 30;
    }
    else if (month == 2){
        if (leapyear){
            days = 29; // leap year
        }
        else{
            days = 28; // non-leap year
            
        }
    }
    else{
        printf("Invalid month input.\n");
        return 1; 
    }
    if (theday < 1 || theday > days){
        printf("Invalid day input.\n");
        return 1; 
    }

    printf("%d , %s.\n", year, months[month - 1]);
    printf("___  ___  ___  ___  ___  ___  ___\n");
    printf(" S    M    T    W    T    F    S \n");
    for (int i =1; i <= days; i++){
        printf("%2d ", i);
        if (i == theday){
            printf("* ");
        }
        else{
            printf("  ");
        }
        if (i % 7 == 0){
            printf("\n");
        }
    }
    
    return 0;
}
