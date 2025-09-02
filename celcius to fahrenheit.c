#include<stdio.h>

int main() {
    
    float celcius;
    float fahrenheit;
    
    printf("enter the value of celcius");
    scanf("%f", &celcius);
    
    fahrenheit = (9*celcius)/5 +32;
    
    printf("%.2f celcius is equal to %.2f fahrenheit.\n", celcius, fahrenheit);
    
    return 0;
}