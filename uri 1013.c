#include<stdio.h>

int main()
{
    int a,b,c,d,x;
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    x=(d+c+abs(d-c))/2;
    printf("%d eh o maior\n",x);
    return 0;
}

