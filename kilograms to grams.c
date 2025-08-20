#include <stdio.h>

int main() {
    float kilograms;
    float grams;
    
    printf("enter value of kilograms: ");
    scanf("%f", &kilograms);
    
    grams = kilograms*1000;
    
    printf("%f kilograms is equal to %f grams.\n", kilograms,grams);
    
    return 0;
}