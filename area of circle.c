#include<stdio.h>

int main() {
    float radius;
    float area;
    
    printf("enter the radius");
    scanf("%f", &radius);
    
    area = (22*radius*radius)/7;
    
    printf("area is %.2f for radius %.2f.\n", radius,area);
    
    return 0;
    
    
}