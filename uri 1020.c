#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,n;
    scanf("%d",&n);
    a=n/365;
    printf("%d ano(s)\n",a);
    b=n-a*365;
    c=b/30;
    printf("%d mes(es)\n",c);
    d=b-c*30;
    printf("%d dia(s)\n",d);
    return 0;
}
