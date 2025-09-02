#include<stdio.h>

int main() {
    float ruppees;
    float dollars;
    float pounds;
    
    printf("enter the value of ruppees");
    scanf("%f", &ruppees);
    
    dollars = 48/ruppees;
    pounds=  70/ruppees;
    
    printf("%.2f ruppees is equal to %.2f dollars.\n", ruppees,dollars);
    printf("%.2f ruppees is equal to %2f pounds.\n", ruppees,pounds);
    
   
    
    return 0;
}