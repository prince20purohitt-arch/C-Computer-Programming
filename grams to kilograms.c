#include <stdio.h>

int main() {
    float grams;
    float kilograms;
    
    printf("enter value of grams: ");
    scanf("%f", &grams);
    
    kilograms = grams/1000;
    
    printf("%f grams is equal to %f kilograms.\n", grams,kilograms);
    
    return 0;
}