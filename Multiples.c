#include <stdio.h>
int main(){
    //printf("C Program" \n);
    printf("Enter number here: ");
    int a;
    scanf("%d" ,&a);
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    b = a*1;
    c = a*2;
    d = a*3;
    e = a*4;
    f = a*5;
    g = a*6;
    h = a*7;
    i = a*8;
    j = a*9;
    k = a*10;
    l = a*11;
    m = a*12;
    printf("The first ten multiples of %d are: " , a);
    printf("\n %d" , b);
    printf("\n %d" , c);
    printf("\n %d" , d);
     printf("\n %d" , e);
      printf("\n %d" , f);
       printf("\n %d" , g);
        printf("\n %d" , h);
         printf("\n %d" , i);
          printf("\n %d" , j);
           printf("\n %d" , k);
            printf("\n %d" , l);
             printf("\n %d" , m);
    return 0;
}




#include <stdio.h>

int main() {
    int a;
    printf("Enter your number: ");
    scanf("%d" , &a);
    
    int b;
    printf("Enter number of multiples required: ");
    scanf("%d" , &b);
    
    int i = 1;
    while(i<=b)
    {
        int c = a*i;
        printf("%d x %d = %d\n" ,a, i, c);
        i++;
    }
    return 0;
    
}
