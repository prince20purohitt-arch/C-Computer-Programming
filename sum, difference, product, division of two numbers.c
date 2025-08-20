#include<stdio.h>
int main(){
    int a, b;
    int sum, difference, product, division;
    
    printf("enter the first number: ");
    scanf("%d", &a);
    
    printf("enter the second number: ");
    scanf("%d", &b);
    
    sum= a+b;
    difference= a-b;
    product= a*b;
    division= a/b;
    
    printf("sum of two numbers is %d.\n", sum);
    printf("difference of two numbers is %d.\n", difference);
    printf("product of two numbers is %d.\n", product);
    printf("division of two numbers is %d.\n", division);
    
    return 0;
}