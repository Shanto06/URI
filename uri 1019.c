#include<stdio.h>

int main()
{
    int a,b,c,d,e,n,f;
    scanf("%d",&n);
    a=n/3600;
    b=n-a*3600;
    c=b/60;
    d=b-c*60;
    printf("%d:%d:%d\n",a,c,d);
    return 0;
}
