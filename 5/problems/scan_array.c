#include <stdio.h>

#define MAX_ARRAY_LENGTH

int main(void) {
    
    int array[MAX_ARRAY_LENGTH];
    
    int length = scanf_array(MAX_ARRAY_LENGTH, array);
    
    printf("%d\n", length);
    
    return 0;
}

int scanf_array(int maxLength, int array[maxLength]) {
    
    int i = 0;
    
    while (scanf("%d", &array[i]) == 1 && i < maxLength) {
        
        i++;
        
    }
    
    return i;
    
}
