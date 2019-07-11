#include <stdio.h>

int main(void) {

    char ch;
    int sum = 0;
    
    while ((ch = getchar()) != EOF) {
        
        if (ch >= '0' && ch <= '9') {
            
            sum += ch - '0';
            
        }
        
    }
    
    printf("The sum was %d\n", sum);
    
    return 0;
}
