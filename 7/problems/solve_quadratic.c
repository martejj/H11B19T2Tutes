#include <stdio.h>
#include <math.h>

void solveQuadratic(int a, int b, int c, double *x1, double *x2);

int main (void) {
    
    printf("Enter a quadratic of the form a*x^2 + b*x + c = 0\n");
    
    int a;
    int b;
    int c;
    
    printf("a: ");
    scanf("%d", &a);
    
    printf("b: ");
    scanf("%d", &b);
    
    printf("c: ");
    scanf("%d", &c);
    
    double root1 = 0;
    double root2 = 0;
    
    solveQuadratic(a, b, c, &root1, &root2);
    
    printf("The roots are x1 = %lf and x2 = %lf\n", root1, root2);
    
}

void solveQuadratic(int a, int b, int c, double *x1, double *x2) {
    
    
    double root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    
    double root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    
    *x1 = root1;
    *x2 = root2;
    
}
