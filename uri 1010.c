#include<stdio.h>

int main()
{
    int a,b;
    double c,d,x,y;
    scanf("%d%d%lf",&a,&b,&c);
    d=b*c;
    scanf("%d%d%lf",&a,&b,&c);
    x=b*c;
    y=d+x;
    printf("VALOR A PAGAR: R$ %.2lf\n",y);
    return 0;
}

