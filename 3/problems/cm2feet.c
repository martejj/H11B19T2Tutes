#include <stdio.h>

int main(void) {
    
    double cm;
    
    printf("Enter your height in centimetres:");
    scanf("%lf", &cm);
    
    double feet = (cm / 2.54) / 12;
    
    printf("Your height in feet is %lf\n", feet);
    
    return 0;
    
}
