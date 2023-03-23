#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d%d",&a,&b);
    
    for (int i =a; i <=b; i=i+a)
    {
        printf("%d\n",i);
    }
    
    return 0;
}