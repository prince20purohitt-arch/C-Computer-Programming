#include<stdio.h>

int main() {
    
    float dollars;
    float ruppees;
    
    printf("enter the value of dollars");
    scanf("%f", &dollars);
    
  ruppees = 48*dollars;
    
    printf("%.2f dollars is equal to %.2f ruppees.\n", dollars,ruppees);
    
    return 0;
}