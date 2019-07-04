#include <stdio.h>

int print_array(int length, int array[length]);

int main(void) {
    
    int array[] = {1, 7, 8, 9, 54, 324};
    
    print_array(6, array);
    
    return 0;
    
}

void print_array(int length, int array[length]) {
    
    int i = 0;
    
    while (i < length) { 
        
        printf("%d\n", array[i]);
        i++;
        
    }
    
}
