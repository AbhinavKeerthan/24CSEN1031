#include <stdio.h>

int main() {
    printf("Enter P1: ");
    char q;
    scanf("%c" , q);
    printf("\nEnter P2: ");
    char w;
    scanf("%c" , w);
    
    printf("\n\nPLAYER HEIGHTS [in cm]");
    printf("\n%c: " , q);
    int a;
    scanf("%d" , &a);
    printf("\n%c: " , w);
    int b;
    scanf("%d" , &b);
    
      printf("\nP1's height is %d cm." , a);
      printf("\nP2's height is %d cm." , b);
    
    {if (a > b)
        printf("\n\nP1 is taller than P2.");
    else
        printf("\n\nP2 is taller than P1.");
        }
        
    return 0;
    }
