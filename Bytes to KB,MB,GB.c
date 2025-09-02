#include<stdio.h>

int main() {
    int bytes;
    int kilobytes;
    int megabytes;
    int gigabytes;
    
    printf("enter the value of bytes");
    scanf("%d", &bytes);
    
    kilobytes= 1024*bytes;
    megabytes= 1024*1024*bytes;
    gigabytes= 1024*1024*1024*bytes;
    printf("kilobytes is %d.\n", kilobytes);
    printf("megabytes is %d.\n", megabytes);
    printf("gigabytes is %d.\n", gigabytes);
    
    return 0;
}
