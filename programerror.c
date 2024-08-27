#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Height: " );
    scanf("%d" , &a);
    printf("Side 1: ");
    scanf("%d" , &b);
    printf("Side 2: ");
    scanf("%d" , &c);
   // float d = 0.5*a*b+c*
   // printf("Area of trapezium is %f" , d);
   int d= b+c;
   int e = 1/2*a*d;
    printf("Area of trapezium is %d" , e);
    return 0;
}
