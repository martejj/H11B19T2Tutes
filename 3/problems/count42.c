// This program really 

#include <stdio.h>

int main(void) {
    
    int i;
    printf("Enter start: ");
    scanf("%d", &i);
    
    int finish;
    printf("Enter finish: ");
    scanf("%d", &finish);
    
    
    while (i <= finish) {
        
        if (i%2 == 0) {
            
            printf("%d\n", i);
        
        }
        
        i++;
        
    }
    
}
