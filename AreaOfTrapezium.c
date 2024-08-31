#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    
    printf("Height: " );
    scanf("%d", &a);
    
    printf("Side 1: ");
    scanf("%d", &b);
    
    printf("Side 2: ");
    scanf("%d", &c);
    
    int d = b + c;
    
    float e = 0.5 * a * d;
    
    printf("Area of trapezium is %f\n", e);
    
    return 0;
}
