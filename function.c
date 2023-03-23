#include<stdio.h>
void max_of_four_num(int a,int b,int c,int d)
{
    if((a>b)&&(a>c)&&(a>d))
    {
      printf("The max no. is:%d",a);
    }
    
    else
    {
        if((b>c)&&(b>d))
        {
            printf("%dThe max no. is:",b);
        }
        else
        {
            if(c>d)
            {
                printf("%dThe max no. is:",c);
            }
            else
            {
                printf("%dThe max no. is:",d);
            }
        }
    }
    
}
int main()
{
    int a,b,c,d;
    printf("Enter a number\n");
    
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max_of_four_num(a,b,c,d);
    return 0;
}