#include<stdio.h>

int main()
{
    int t,v,s;
    double c;
    scanf("%d%d",&t,&v);
    s=v*t;
    c=(double)s/12;
    printf("%.3lf\n",c);
    return 0;
}
