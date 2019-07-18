#include <stdio.h>
#include <math.h>

void findRoots(int a, int b, int c, double *x1, double *x2);

int main(void) {

    int a;
    int b;
    int c;

    printf("Enter a quadratic of the form ax^2 + bx + c = 0\n");
    
    printf("a: ");
    scanf("%d", &a);
    
    printf("b: ");
    scanf("%d", &b);
    
    printf("c: ");
    scanf("%d", &c);

    double x1 = 0;
    double x2 = 0;

    findRoots(a, b, c, &x1, &x2);

    printf("Roots are x1 = %lf, x2 = %lf\n", x1, x2);

}

void findRoots(int a, int b, int c, double *x1, double *x2) {

    double root1 = (-b + sqrt(b*b - 4.0*a*c))/(2.0*a);

    double root2 = (-b - sqrt(b*b - 4.0*a*c))/(2.0*a);

    *x1 = root1;

    *x2 = root2;

}
