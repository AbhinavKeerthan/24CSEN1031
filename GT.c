#include <stdio.h>
#include <string.h>

int main() {
    char a[3];
    char b[3] = "GT";
    
    printf("Enter secret code: ");
    scanf("%2s" , a);
    
    if (strcmp(a, b) == 0)
    {
        printf("Hello Internet, Welcome to GAME THEORY!\n");
    }
    else
    {
        printf("Access Denied!\n");
    }
    
    return 0;
}
