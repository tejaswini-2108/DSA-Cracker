#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p=a;
    printf("value of *p=%d\n",*p);
    p++;
    printf("after p++=%d\n",*p);
    p=p+2;
    printf("after p+2=%d\n",*p);
    p--;
    printf("after p--=%d\n",*p);
    return 0;
}