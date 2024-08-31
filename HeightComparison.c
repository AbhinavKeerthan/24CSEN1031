#include <stdio.h>

int main() {
    printf("Enter P1: ");
    char q[10];
    scanf(" %s", &q);
    
    printf("\nEnter P2: ");
    char w[10];
    scanf(" %s", &w);
    
    printf("\n\nPLAYER HEIGHTS [in cm]");
    printf("\n%s: ", q);
    int a;
    scanf("%d", &a);
    
    printf("\n%s: ", w);
    int b;
    scanf("%d", &b);
    
    printf("\n %s's height is %d cm.", q , a);
    printf("\n %s's height is %d cm.", w , b);
    
    if (a > b)
        printf("\n\n %s is taller than %s." , q , w);
    else if (a < b)
        printf("\n\n %s is taller than %s." , q , w);
    else
        printf("\n\n %s and %s are of equal height." , q , w);
        
    return 0;
}
