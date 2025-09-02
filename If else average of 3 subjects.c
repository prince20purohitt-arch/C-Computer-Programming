#include <stdio.h>

int main() {
    int a;
    int b; 
    int c;
    int total;
    float avg;

    
    printf("Enter marks of Subject 1: ");
    scanf("%d", &a);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &b);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &c);

    
    total = a + b + c;
    avg = total / 3.0;   

    printf("\nTotal = %d", total);
    printf("\nAverage = %.2f\n", avg);

    
    if (a < 35 || b < 35 || c < 35) {
        printf("Result: FAIL (Scored below 35 in a subject)\n");
    } 
    else {
         if (avg >= 70) {
            printf("Result: DISTINCTION\n");
        } else if (avg >= 60) {
            printf("Result: FIRST CLASS\n");
        } else if (avg >= 50) {
            printf("Result: SECOND CLASS\n");
        } else if (avg >= 35) {
            printf("Result: THIRD CLASS\n");
        } else {
            printf("Result: FAIL\n");
        }
    }

    return 0;
}