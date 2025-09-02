#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    
    if (a >= b && a >= c) {
        printf("Largest = %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest = %d\n", b);
    } else {
        printf("Largest = %d\n", c);
    }

    
    if (a <= b && a <= c) {
        printf("Smallest = %d\n", a);
    } else if (b <= a && b <= c) {
        printf("Smallest = %d\n", b);
    } else {
        printf("Smallest = %d\n", c);
    }

    return 0;
}
