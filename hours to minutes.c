/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main() {
    int hours;
    int minutes;
    
    printf("enter the value of hours: ");
    scanf("%d", &hours);
    
    minutes= hours * 60;
    
    printf("%d is hours is equal to %d minutes.\n", hours,minutes);
    
    return 0;
}
    