#include <stdio.h>

int main()
{
    float length;
    float height;
    float area;
    printf("enter the length");
    scanf("%f", &length);
    printf("enter the height");
    scanf("%f", &height);
    
    area = (length*height)/2;
    printf("area is %.2f for length %.2f and height %.2f.\n", area,length,height);
    
    

    return 0;
}
