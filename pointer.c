#include<stdio.h>
int main()
{
   int a=78;
   int *ptra=&a;
   int *ptr=NULL;

   printf("The adress of pointer pointing to a is:%p\n",&ptra);
   printf("The adress of a is:%p\n",&a);
   printf("The adress of a is:%p\n",ptra);
   printf("The adress of garbage value is:%p\n",ptr);
   printf("The value of a is:%d\n",a);
   printf("The value of a is:%d",*ptra);
   


    
    
    return 0;
}