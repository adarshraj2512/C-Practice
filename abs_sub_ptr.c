#include <stdio.h>

void update(int *a,int *b) {
    *a=*a+*b;
    *b=((*a-*b)-*b);
    if (*b<0)
    {
        *b=-*b;  //insted of using this we can use abs function to get +ve value of a -ve number.
    }
    
    
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}