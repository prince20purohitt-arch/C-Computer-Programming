#include <stdio.h>

int main()
{
    float length;
    float area;
    float perimeter;
    printf("enter the length");
    scanf("%f", &length);
    
    area = length*length;
    perimeter = 4*length;
    printf("area is %.2f for length %.2f.\n", length,area);
    printf("perimeter is %.2f for length %.2f.\n", length,perimeter);
    

    return 0;
}
