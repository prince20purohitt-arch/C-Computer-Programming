#include<stdio.h>

int main() {
    int gross_sales;
    int discount;
    int net_sales;
    
    printf("enter the gross sales");
    scanf("%d", &gross_sales);
    
    
    discount = 0.10*gross_sales;
    net_sales = gross_sales - discount;
    
    printf("discount is %d.\n", discount);
    printf("net_sales is %d.\n", net_sales);
    
    return 0;
}
