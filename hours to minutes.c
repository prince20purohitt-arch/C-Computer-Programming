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
    
