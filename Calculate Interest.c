/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    float interest;
    float principal_value;
    float rate;
    float number_of_periods;
    
    printf("enter the principal value"); 
    scanf("%f", &principal_value);
    printf("enter the rate");
    scanf("%f", &rate);
    printf("enter the number of periods");
    scanf("%f", &number_of_periods);
    
    
    
    interest= principal_value*rate*number_of_periods;
    
    printf("interest is %.2f.\n",interest);

    return 0;
}
