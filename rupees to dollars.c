#include<stdio.h>

int main() {
    float ruppees;
    float dollars;
    
    printf("enter the value of ruppees");
    scanf("%f", &ruppees);
    
    dollars = 48/ruppees;
    
    printf("%.2f ruppees is equal to %.2f dollars.\n", ruppees,dollars);
    
    return 0;
}