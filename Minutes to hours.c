#include <stdio.h>

int main() {
    int minutes;
    int hours;
    
    printf("enter value of minutes: ");
    scanf("%d", &minutes);
    
    hours= minutes/60;
    
    printf("%d minutes is equal to %d hours.\n", minutes,hours);
    
    return 0;
}