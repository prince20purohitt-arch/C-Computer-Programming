#include<stdio.h>

int main() {
    float fahrenheit;
    float celcius;
    
    printf("enter the value of fahrenheit");
    scanf("%f", &fahrenheit);
    
    celcius = (fahrenheit-32)*5/9;
    
    printf("%.2f fahrenheit is equal to %.2f celcius.\n",fahrenheit,celcius);
    
    return 0;
}
