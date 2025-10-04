// this is the first of 15 projects in C by Alireza JT
/*
learning outcomes:
Understanding of variables, data types, and operators in C
Use of multiple library functions and work with user input
Implementation of control flow statements like if-else statements or switch statements 
Performing basic arithmetic operations 

*/
#include <stdio.h>

int main(void){
    float a,b,result;
    char c = ' ';
    printf("First value : ");
    scanf("%f",&a);
    printf("operators [ + , - , * , / ] : ");
    scanf(" %c",&c);  // Note the space before %c (to skip any whitespace characters)
    printf("Second value : ");
    scanf("%f",&b);
    
    switch(c){
        case '+':
            result = a+b;
            printf("%.1f + %.1f = %.1f", a,b,result);
            break;
        case '-':
            result = a-b;
            printf("%.1f - %.1f = %.1f", a,b,result);
            break;
        case '*':
            result = a*b;
            printf("%.1f * %.1f = %.2f", a,b,result);
            break;
        case '/':
            if (b != 0.0){
                result = a / b;
                printf("%.1f / %.1f = %.2f", a,b,result);
                break; 
            }
            else{
                printf("error!");
            }
    }
    return 0;// end of the main function (i had forgotten this in the earlier version)
}