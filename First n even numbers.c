#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d even numbers:\n", n);

    for(i = 1; i <= n; i++) {
        printf("%d\n", 2 * i);
    }

    return 0;
}
