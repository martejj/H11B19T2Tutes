// 
// Program to pass pass_fail
// Written by H11B
// 

#include <stdio.h>

int main(void) {
    
    printf("Please enter your mark: ");
    
    double mark;
    scanf("%lf", &mark);
    
    if (mark >= 50 && mark <= 100) {
        printf("PASS\n");
    } else if (0 <= mark && mark <= 49) {
        printf("FAIL\n");
    } else {
        printf("ERROR\n");
    }
    
    return 0;

}
