#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int(*p)[5];
    p=&a;
    printf("array elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",(*p)[i]);
    }
    return 0;
}