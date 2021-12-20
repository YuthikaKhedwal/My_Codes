#include<stdio.h>
#include<stdlib.h>
void ex(int num)
{
    int a,b,c,d;
    a=num&0xff;
    b=(num>>8)&0xff;
    c=(num>>16)&0xff;
    d=(num>>24)&0xff;
    printf(" %d %d %d %d",a,b,c,d);

    
}
int main()
{
    int x;
    scanf("%d",&x);
    ex(x);
}