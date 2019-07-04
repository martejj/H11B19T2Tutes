#include <stdio.h>

int main(void) {
    int z = -1;
    int array[6] = {42, 42, 42, 42, 42, 42};
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    
    int i = -2;
    while (i < 14) {
        printf("i = %d => array[i] = %d\n", i, array[i]);
        i++;
    }
    
    return 0;
}
